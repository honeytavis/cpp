#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <iostream>

bool Serve(int client_socket)
{
	while (true) {
		int length; 
		char* msg; 
		if (read(client_socket, &length, sizeof(length)) == 0) {
			return true; 
		}
		msg = new char[length]; 
		read(client_socket, msg, length); 
		std::cout << msg << std::endl; 
		if (!strcmp(msg, "quit")) {
			delete [] msg; 
			msg = NULL; 
			return false; 
		} else {
			delete [] msg; 
			msg = NULL; 
		}
	}
}

int main(int argc, char** argv)
{
	const char* const socket_name = argv[1]; 
	int socket_fd; 
	struct sockaddr_un name; 
	bool serving = true; 

/// 创建套接字
	socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0); 

/// 设定服务器性质
	name.sun_family = AF_LOCAL; 
	strcpy(name.sun_path, socket_name); 

/// 绑定套接字
	bind(socket_fd, (struct sockaddr*)&name, SUN_LEN(&name)); 

/// 侦听客户连接
	listen(socket_fd, 5); 

/// 重复接受连接 直到某个客户发出 "quit" 消息
 	while (serving) {
		struct sockaddr_un client_name; 
		socklen_t client_name_len; 
		int client_socket_fd; 

	/// 接受客户连接请求
		client_socket_fd = accept(socket_fd,
								  (struct sockaddr*)&client_name, 
								  &client_name_len); 
		close (client_socket_fd); 
	}

	close(socket_fd); 
	unlink(socket_name); // 删除套接字

	return 0; 
}
