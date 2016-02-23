#include <stdio.h>
    
int main(void)
{
    char s1[10] = "123456789"; 
    char s2[10]; 
    const char s3[10] = "123456789"; 
    
    printf("addr s1:%p\n", s1); 
    printf("addr s2:%p\n", s2); 
    printf("addr s3:%p\n", s3); 

    return 0;  
}

/*
addr s1:0x7fffc458d620
addr s2:0x7fffc458d610
addr s3:0x7fffc458d600

   text	   data	    bss	    dec	    hex	filename
   1868	    612	      4	   2484	    9b4	main
*/
