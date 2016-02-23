#include <iostream>

char gs1[10] = {0}; 
char gs2[] = "123456789"; 
char gs3[10]; 
const char gs4[10] = "123456789"; 

int main(int argc, char* argv[])
{
    char s1[10] = {0}; 
    char s2[] = "123456789"; 
    char s3[10]; 
    const char s4[10] = "123456789"; 
    char *s5 = new char[10]{'1', '2', '3', '4', '5'}; 

    std::cout << "addr s1:" << &s1 << std::endl; 
    std::cout << "addr s2:" << &s2 << std::endl; 
    std::cout << "addr s3:" << &s3 << std::endl; 
    std::cout << "addr s4:" << &s4 << std::endl; 
    std::cout << "addr s5:" << &s5 << std::endl; 

    std::cout << "addr gs1:" << &gs1 << std::endl; 
    std::cout << "addr gs2:" << &gs2 << std::endl; 
    std::cout << "addr gs3:" << &gs3 << std::endl; 
    std::cout << "addr gs4:" << &gs4 << std::endl; 

	delete s5; 

    return 0;  
}

/*
addr s1:0x7fff0f2b10a0
addr s2:0x7fff0f2b1090
addr s3:0x7fff0f2b1080
addr s4:0x7fff0f2b1070
addr s5:0x1781010
addr gs1:0x6021d4
addr gs2:0x60209c
addr gs3:0x6021de
addr gs4:0x400eb3

   text	   data	    bss	    dec	    hex	filename
   3633	    720	    304	   4657	   1231	main
*/
