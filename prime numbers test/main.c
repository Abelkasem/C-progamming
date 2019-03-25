#include <stdio.h>
#include <stdlib.h>

int main()
{   int p,i,x,y;
printf("enter a number\n");

    scanf("%d",&p);
    y=1;
    for(i=2;i<=p-1;i++){
        x=p%i;
    if (x==0) y=0; }
    if (y)
        printf("%d is prime",p);
    else printf("%d not prime",p);

    return 0;
}
