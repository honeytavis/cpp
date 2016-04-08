#include "Socket.h"
#include "InetAddress.h"

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

namespace TCP {

Socket::Socket() 
{
    _sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); 
    if (-1 == _sockfd) {
        perror("socket()"); 
        exit(EXIT_FAILURE); 
    }
}

const int Socket::fd() const 
{
    return _sockfd; 
}

void Socket::bind(InetAddress& addr) 
{
    int ret = ::bind(_sockfd, 
                     (struct sockaddr*)addr.getSockAddrInet(), 
                     sizeof(struct sockaddr)); 
    if (-1 == ret) {
        perror("bind()"); 
        exit(EXIT_FAILURE); 
    }
}

void Socket::listen() 
{
    if (-1 == ::listen(_sockfd, 10)) {
        perror("listen()"); 
        exit(EXIT_FAILURE); 
    }
}

int Socket::accept() 
{
    int accefd = ::accept(_sockfd, NULL, NULL); 
    if (-1 == accefd) {
        perror("accept()"); 
        exit(EXIT_FAILURE); 
    }
    
    InetAddress local = localAddress(accefd); 
    InetAddress peer = peerAddress(accefd); 
    printf("connected! %s:%d --> %s:%d\n", local.ip().c_str(), local.port(),
                                           peer.ip().c_str(), peer.port()); 
    return accefd; 
}

void Socket::setAddrReuse(bool on) 
{
    int optval = on ? 1 : 0; 
    int ret = ::setsockopt(_sockfd, SOL_SOCKET, SO_REUSEPORT, &optval, 
                           static_cast<socklen_t>(sizeof(optval))); 
    if (-1 == ret) {
        perror("setsockopt()"); 
        close(_sockfd); 
        exit(EXIT_FAILURE); 
    }
}

void Socket::setPortReuse(bool on) 
{
#ifdef SO_REUSEPORT
    int optval = on ? 1 : 0; 
    int ret = setsockopt(_sockfd, SOL_SOCKET, SO_REUSEPORT, &optval,
                         static_cast<socklen_t>(sizeof(optval))); 
    if (-1 == ret) {
        perror("setsockopt()"); 
        exit(EXIT_FAILURE); 
    }
#else
    if (on) {
        fprintf(stderr, "SO_REUSEPORT is not supported.\n"); 
    }
#endif
}

void Socket::ready(InetAddress& addr) 
{
    setPortReuse(true); 
    bind(addr); 
    listen(); 
}

InetAddress Socket::localAddress(int sockfd) 
{
    struct sockaddr_in addr; 
    memset(&addr, 0, sizeof(addr)); 
    socklen_t len = sizeof(addr); 
    int ret = getsockname(sockfd, (struct sockaddr*)&addr, &len); 
    if (-1 == ret) {
        perror("getsockname()"); 
    }

    return InetAddress(addr); 
}

InetAddress Socket::peerAddress(int sockfd) 
{
    struct sockaddr_in addr; 
    memset(&addr, 0, sizeof(addr)); 
    socklen_t len = sizeof(addr); 
    int ret = getpeername(sockfd, (struct sockaddr*)&addr, &len); 
    if (-1 == ret) {
        perror("getsockname()"); 
    }

    return InetAddress(addr); 
}

//void Socket::shutdownWrite() {}

}
