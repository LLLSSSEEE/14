//
// 2023.12.07 
// Week 14
// Practice 1
// 1914022 _ Sieun LEE
//
 

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
     char *pc = NULL;
     int i = 0;
     
     pc = (char*)malloc(100*sizeof(char)); //동적 메모리 할당(1) - 결국 100byte 가 할당이 된다.  
     if(pc == NULL)
     {
           printf("메모리 할당 오류\n");
           exit(1); 
     }
     
     for (i=0; i<26; i++)
     {
         pc[i] = 'a' + i; //좌변:메모리 할당받은 처음 부분, 우변:계속 증가. 
     }
     pc[i] = 0; 
     printf("%s\n", pc);
     
     free(pc); //동적 메모리 할당(2) 
}
