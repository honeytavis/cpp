**memory layout in c**

	#include <stdio.h>
	#include <string.h>
	    
	int main(void)
	{
	    char s1[10] = "123456789"; 
	    char s2[10]; 
	    const char s3[10] = "123456789"; 
	    
	    printf("%p\n", s1); 
	    printf("%p\n", s2); 
	    printf("%p\n", s3); 
	
	    return 0;  
	}
	
	$ ./main 
	0x7fff95645bc0
	0x7fff95645bb0
	0x7fff95645ba0
	$ 
	$ size main
	   text    data     bss     dec     hex filename
	   1836     612       4    2452     994 main
	$ 

	#include <stdio.h>
	#include <string.h>
	
	char gs1[10] = "123456789"; 
	char gs2[10]; 
	const char gs3[10] = "123456789"; 
	    
	int main(void)
	{
	    char s1[10] = "123456789"; 
	    char s2[10]; 
	    const char s3[10] = "123456789"; 
	    
	    printf("%p\n", s1); 
	    printf("%p\n", s2); 
	    printf("%p\n", s3); 
	
	    printf("%p\n", gs1); 
	    printf("%p\n", gs2); 
	    printf("%p\n", gs3); 
	
	    return 0;  
	}
	
	$ ./main 
	0x7fffc2dd7c40
	0x7fffc2dd7c30
	0x7fffc2dd7c20
	0x601044
	0x601054
	0x400854
	$ size main
	   text    data     bss     dec     hex filename
	   1896     624      16    2536     9e8 main
	$ 

**memory layout in cpp**

	#include <iostream>
	
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
	
	    return 0;  
	}
	$ ./main 
	addr s1:0x7fff5206ecf0
	addr s1:0x7fff5206ece0
	addr s1:0x7fff5206ecd0
	addr s4:0x7fff5206ecc0
	$ size main
	   text    data     bss     dec     hex filename
	   2840     668     280    3788     ecc main
	$ 


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

	$ ./main 
	addr s1:0x7fff8a2cc0a0
	addr s1:0x7fff8a2cc090
	addr s1:0x7fff8a2cc080
	addr s4:0x7fff8a2cc070
	addr gs1:0x602194
	addr gs2:0x602074
	addr gs3:0x60219e
	addr gs4:0x400c7b
	$ size main
	   text    data     bss     dec     hex filename
	   3050     680     304    4034     fc2 main
	$ 
