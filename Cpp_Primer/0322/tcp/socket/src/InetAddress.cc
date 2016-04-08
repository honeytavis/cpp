#include "InetAddress.h"
#include <string.h>

namespace TCP {

InetAddress::InetAddress(uint16_t port)
{
    memset(&_addr, 0, sizeof(_addr)); 
    _addr.sin_family = AF_INET; 
    _addr.sin_port = htons(port); 
    _addr.sin_addr.s_addr = inet_addr("127.0.0.1"); // local host
}

InetAddress::InetAddress(const struct sockaddr_in& addr) : _addr(addr) {}

InetAddress::InetAddress(const std::string& ip, uint16_t port) 
{
    memset(&_addr, 0, sizeof(_addr)); 
    _addr.sin_family = AF_INET; 
    _addr.sin_port = htons(port); 
    _addr.sin_addr.s_addr = inet_addr(ip.c_str()); 
}

void InetAddress::setSockAddrInet(const struct sockaddr_in& addr) 
{
    _addr = addr; 
}

const struct sockaddr_in* InetAddress::getSockAddrInet() const
{
    return &_addr; 
}

std::string InetAddress::ip() const
{
    return inet_ntoa(_addr.sin_addr); 
}

uint16_t InetAddress::port()  const
{
    return ntohs(_addr.sin_port); 
}

}
