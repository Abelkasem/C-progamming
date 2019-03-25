#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,p=0,i=0,r=1;
    printf("enter number & power\n");
    scanf("%d %d",&n,&p);
    for(i=0;i<p;i++)r=n*r;
    printf("result of %d power %d is %d",n,p,r);
    return 0;
}
