#include <cstdio>
#include <errno.h>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <iostream>
#include <arpa/inet.h>
    
int main()
{
	int listenfd = socket(AF_INET, SOCK_STREAM, 0); 
	if (-1 == listenfd) {
		perror("socket()"); 
		exit(-1); 
	}

	struct sockaddr_in serverAddr; 
	memset(&serverAddr, 0, sizeof(sockaddr_in)); 
	serverAddr.sin_family = AF_INET; 
	serverAddr.sin_port = htons(8888); 
	serverAddr.sin_addr.s_addr = INADDR_ANY; 

	int ret = bind(listenfd, 
				   (struct sockaddr*)&serverAddr,
				   sizeof(struct sockaddr)); 

	if (-1 == ret) {
		perror("bind"); 
		close(listenfd); 
		exit(-1); 
	}

	ret = listen(listenfd, 10); 
	if (-1 == ret) {
		perror("listen"); 
		close(listenfd); 
		exit(-1); 
	}

	int connectfd = accept(listenfd, NULL, NULL); 
	char buff[1024] = "welcome to server."; 
	ret = write(connectfd, buff, sizeof(buff)); 

	while (true) {
		memset(buff, 0, 1024); 
		ret = read(connectfd, buff, 1024); 
		write(connectfd, buff, sizeof(buff)); 
	}

	return 0; 
}
