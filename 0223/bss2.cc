#include <iostream>

char gs1[1000] = {0}; 

int main(int argc, char* argv[])
{
    char s1[10] = {0}; 
    char s2[] = "123456789"; 
    char s3[10]; 
    const char s4[10] = "123456789"; 

    std::cout << "addr s1:" << &s1 << std::endl; 
    std::cout << "addr s1:" << &s2 << std::endl; 
    std::cout << "addr s1:" << &s3 << std::endl; 
    std::cout << "addr s4:" << &s4 << std::endl; 

    std::cout << "addr gs1:" << &gs1 << std::endl; 

    return 0;  
}

/*
   text	   data	    bss	    dec	    hex	filename
   2882	    668	   1296	   4846	   12ee	main
*/
