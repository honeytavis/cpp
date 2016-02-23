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

    std::cout << "addr s1:" << &s1 << std::endl; 
    std::cout << "addr s1:" << &s2 << std::endl; 
    std::cout << "addr s1:" << &s3 << std::endl; 
    std::cout << "addr s4:" << &s4 << std::endl; 

    std::cout << "addr gs1:" << &gs1 << std::endl; 
    std::cout << "addr gs2:" << &gs2 << std::endl; 
    std::cout << "addr gs3:" << &gs3 << std::endl; 
    std::cout << "addr gs4:" << &gs4 << std::endl; 

    return 0;  
}

/*
addr s1:0x7fff593c80b0
addr s1:0x7fff593c80a0
addr s1:0x7fff593c8090
addr s4:0x7fff593c8080
addr gs1:0x602194
addr gs2:0x602074
addr gs3:0x60219e
addr gs4:0x400c7b

   text	   data	    bss	    dec	    hex	filename
   3050	    680	    304	   4034	    fc2	main
*/
