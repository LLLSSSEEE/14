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
     
     pc = (char*)malloc(100*sizeof(char)); //���� �޸� �Ҵ�(1) - �ᱹ 100byte �� �Ҵ��� �ȴ�.  
     if(pc == NULL)
     {
           printf("�޸� �Ҵ� ����\n");
           exit(1); 
     }
     
     for (i=0; i<26; i++)
     {
         pc[i] = 'a' + i; //�º�:�޸� �Ҵ���� ó�� �κ�, �캯:��� ����. 
     }
     pc[i] = 0; 
     printf("%s\n", pc);
     
     free(pc); //���� �޸� �Ҵ�(2) 
}
