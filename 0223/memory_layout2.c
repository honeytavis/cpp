#include <stdio.h>

char gs1[10] = "123456789"; 
char gs2[10]; 
const char gs3[10] = "123456789"; 
    
int main(void)
{
    char s1[10] = "123456789"; 
    char s2[10]; 
    const char s3[10] = "123456789"; 
    
    printf("addr s1:%p\n", s1); 
    printf("addr s2:%p\n", s2); 
    printf("addr s3:%p\n", s3); 

    printf("addr gs1:%p\n", gs1); 
    printf("addr gs2:%p\n", gs2); 
    printf("addr gs3:%p\n", gs3); 

    return 0;  
}

/*
addr s1:0x7fff9d164910
addr s2:0x7fff9d164900
addr s3:0x7fff9d1648f0
addr gs1:0x601044
addr gs2:0x601054
addr gs3:0x40089b

   text	   data	    bss	    dec	    hex	filename
   1967	    624	     16	   2607	    a2f	main
*/
