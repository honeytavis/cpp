#include "InetAddress.h"
#include "Socket.h"
#include "SocketIO.h"

int main()
{
    InetAddress inetaddr("192.168.107.129", 8888); 
    Socket socket; 
    socket.ready(inetaddr); 

    int ret = socket.accept(); 
    SocketIO sockIO(ret); 

    char buf[20]; 
    sockIO.readn(buf, sizeof(buf)); 
    //sockIO.readline(buf, 1024); 
    //sockIO.writen(buf, 1024); 

    return 0; 
}
