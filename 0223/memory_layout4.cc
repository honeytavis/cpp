#include <string.h>
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
	char *s6 = (char *) malloc(10); 
	memset(s6, 0, 10); 
	memcpy(s6, "12345", 5); 
    static char s7[] = "123456789"; 

    std::cout << "addr s1:" << &s1 << std::endl; 
    std::cout << "addr s2:" << &s2 << std::endl; 
    std::cout << "addr s3:" << &s3 << std::endl; 
    std::cout << "addr s4:" << &s4 << std::endl; 
    std::cout << "addr s5:" << &s5 << std::endl; 
    std::cout << "addr s6:" << &s6 << std::endl; 
    std::cout << "addr s7:" << &s7 << std::endl; 

    std::cout << "addr gs1:" << &gs1 << std::endl; 
    std::cout << "addr gs2:" << &gs2 << std::endl; 
    std::cout << "addr gs3:" << &gs3 << std::endl; 
    std::cout << "addr gs4:" << &gs4 << std::endl; 

	delete s5; 
	free(s6); 

    return 0;  
}
