#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb,i,result,count;

     for(count=1;count<=5;count++)
     {

     printf("enter a number\n");
     scanf("%d",&numb);
     result=0;
     for(i=1;i<=numb;i++)
     {
        result+=i;

          if(i<=10)  printf("%2i triangular = %d\n",i,result);
          printf("the %d th  triangular number is  = %d\n",numb,result);

     }
     }


    return 0;}
