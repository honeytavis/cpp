#ifndef INETADDRESS_H
#define INETADDRESS_H

#include <arpa/inet.h>
#include <stdlib.h>
#include <string>

namespace TCP {

class InetAddress {
public:
    explicit InetAddress(uint16_t port); 
    InetAddress(const struct sockaddr_in& addr); 
    InetAddress(const std::string& ip, uint16_t port); 

    void setSockAddrInet(const struct sockaddr_in& addr); 

    const struct sockaddr_in* getSockAddrInet() const; 

    std::string ip() const; 
    uint16_t port() const; 

private:
    struct sockaddr_in _addr; 
}; 

} // end of namespace TCP
#endif
