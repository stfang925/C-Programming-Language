/* hw6_5.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int weight;
   
   printf("請輸入體重:");
   scanf("%d",&weight);
   
   if(weight>90)
      printf("體重過重\n");
   else
      printf("不會過重\n");
      
   system("pause");
   return 0;
}

/* output---------
請輸入體重:95
體重過重
----------------*/
