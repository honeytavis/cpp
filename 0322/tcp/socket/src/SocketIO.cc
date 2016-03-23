#include "SocketIO.h"

#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>

SocketIO::SocketIO(const int sockfd) : _sockfd(sockfd) {}

ssize_t SocketIO::readn(char* buf, size_t count) 
{
    //size_t nleft = count; // 剩余的字节数
    //char* bufp = buf; // 缓冲区的偏移量 

    ssize_t readNum = ::read(_sockfd, buf, count); 
    if (readNum < 0) {
        perror("read()"); 
        exit(EXIT_FAILURE);
    } 
    std::cout << buf << '\n'; 
    return readNum; 

/*

    while (nleft > 0) {
        readNum = ::read(_sockfd, bufp, nleft); 
        if (readNum < 0) {
            if (errno == EINTR) {
                continue; 
            }
            return -1; 
        } else if (0 == readNum) {
            break; 
        } else {
            nleft -= readNum; 
            bufp += readNum; 
        }

        std::cout << buf << '\n'; 
    }

    return count - nleft; 
*/
}

ssize_t SocketIO::writen(char* buf, size_t count) 
{
    size_t nleft = count; 
    ssize_t writeNum; 
    char* bufp = buf; 

    while (nleft > 0) {
        writeNum = ::write(_sockfd, buf, nleft); 
        if (writeNum < 0) {
            if (errno == EINTR) {
                continue; 
            }
            return -1; 
        }
        
        nleft -= writeNum; 
        bufp += writeNum; 
    }

    return count - nleft;  
}

ssize_t SocketIO::recv_peek(char* buf, size_t len) 
{
    int readNum; 
    do {
        readNum = ::recv(_sockfd, buf, len, MSG_PEEK); 
    } while (-1 == readNum && errno == EINTR); 

    return readNum; 
}

ssize_t SocketIO::readline(char* buf, size_t maxlen) 
{
    size_t nleft = maxlen - 1; 
    char* pbuf = buf; 
    ssize_t readNum; 
    size_t total = 0; 

    while (nleft > 0) {
        readNum = recv_peek(pbuf, nleft); 
        if (readNum <= 0) {
            return readNum; 
        }
        for (int i = 0; i != readNum; ++i)
        {
            if (pbuf[i] == '\n') {
                size_t nsize = i + 1; 
                if (static_cast<ssize_t>(nsize) != readn(pbuf, nsize)) {
                    return -1; 
                }
                pbuf += nsize; 
                total += nsize; 
                *pbuf = 0; 
                return total; 
            }
        }

        if (readn(pbuf, readNum) != readNum) {
            return -1; 
        }
        total += readNum; 
        pbuf += readNum; 
        nleft -= readNum; 
    }

    *pbuf = 0; 
    return maxlen - 1; 
}
