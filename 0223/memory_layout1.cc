#include <iostream>

int main(int argc, char* argv[])
{
    char s1[10] = {0}; 
    char s2[] = "123456789"; 
    char s3[10]; 
    const char s4[10] = "123456789"; 

    std::cout << "addr s1:" << &s1 << std::endl; 
    std::cout << "addr s2:" << &s2 << std::endl; 
    std::cout << "addr s3:" << &s3 << std::endl; 
    std::cout << "addr s4:" << &s4 << std::endl; 

    return 0;  
}

/*
addr s1:0x7fffc7fa9a80
addr s2:0x7fffc7fa9a70
addr s3:0x7fffc7fa9a60
addr s4:0x7fffc7fa9a50

   text	   data	    bss	    dec	    hex	filename
   2840	    668	    280	   3788	    ecc	main
*/
