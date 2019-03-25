#include <stdio.h>
#include <stdlib.h>
 int max(int,int);
int main(void)
{   int x,y,z;
printf("enter two numbers\n");
scanf("%d %d",&y,&z);
    x=max(y,z);
    printf("max of %d & %d is %d\n",y,z,x);
    return 0;
}
