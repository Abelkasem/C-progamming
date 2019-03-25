#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
float av;
    printf("Calculation of average of 3 integers\n Enter 3 Integer numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    av=(float)(a+b+c)/3;
    printf("average of %d ,%d & %d is %f",a,b,c,av);


    return 0;
}
