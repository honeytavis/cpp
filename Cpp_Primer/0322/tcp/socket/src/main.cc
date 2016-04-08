#include "InetAddress.h"
#include "Socket.h"
#include "SocketIO.h"

int main()
{
    TCP::InetAddress inetaddr("192.168.107.129", 8888); 
    TCP::Socket socket; 
    socket.ready(inetaddr); 

    int peerfd = socket.accept(); 
    TCP::SocketIO sockIO(peerfd); 

    char buf[1024]; 
    //sockIO.readn(buf, sizeof(buf)); 
    sockIO.readline(buf, 1024); 
    sockIO.writen(buf, 1024); 

    return 0; 
}
