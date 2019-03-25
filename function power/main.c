#include <stdio.h>
#include <stdlib.h>
int gpow(int v,int pr);
int main()
{
    int b,p,res;
    printf("Enter base & power numbers\n");
    scanf("%d %d",&b,&p);
    if (b<0) b=-b;
    res=gpow(b,p);
    printf("%d power %d = %d",b,p,res);
    return 0;
}
int gpow(int v,int pr) {
int rslt=1,i;
for(i=0;i<pr;i++)
{
    rslt*=v;
}
return rslt;
}
