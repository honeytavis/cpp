#ifndef SOCKET_H
#define SOCKET_H

#include "InetAddress.h"

class Socket {
public: 
    Socket(); 

    const int fd() const; 
    void bind(InetAddress& addr); 
    void listen(); 
    int accept(); 

    void setAddrReuse(bool on); 
    void setPortReuse(bool on); 

    void ready(InetAddress& addr); 

    static InetAddress localAddress(int); 
    static InetAddress peerAddress(int); 

    //void shutdownWrite(); 

private:
    int _sockfd; 
}; 

#endif
