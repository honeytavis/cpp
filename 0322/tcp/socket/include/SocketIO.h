#ifndef SOCKETIO_H
#define SOCKETIO_H

#include <stdlib.h>
#include <unistd.h>

class SocketIO {
public: 
    explicit SocketIO(const int sockfd); 

    ssize_t readn(char* buf, size_t count); 
    ssize_t recv_peek(char* buf, size_t len); 
    ssize_t readline(char* buf, size_t maxlen); 
    ssize_t writen(char* buf, size_t maxlen); 

private: 
    int _sockfd;
}; 

#endif
