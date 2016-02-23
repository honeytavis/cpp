#include <iostream>

char gs2[1000] = "123456789"; 

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

    std::cout << "addr gs2:" << &gs2 << std::endl; 

    return 0;  
}

/*
   text	   data	    bss	    dec	    hex	filename
   2882	   1696	    280	   4858	   12fa	main
*/
