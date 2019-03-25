#include <stdio.h>
#include <stdlib.h>
int power(int x,int y);
int main()
{
    int a,b;
    printf("enter 2 integers\n");
    scanf("%d %d",&a,&b);
    printf(" %d power %d = %d",a,b,power(a,b));
    return 0;
}
int power(int x,int y) {
    int n,i,res=1;
    for(i=0;i<y;i++)
    {

     res= res*x;
        }

    return n=res;

}
