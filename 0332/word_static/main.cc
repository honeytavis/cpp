#include <cstdlib>
#include <iostream>
#include "Word_Static.h"

int main(int argc, char **argv)
{
	if (argc != 3) {
		std::cout << "error args" << std::endl; 
		exit(0); 
	}

	Word_Static ws; 
	ws.Read_File(argv[1]); 
	ws.Write_File(argv[2]); 

	return 0; 
}
