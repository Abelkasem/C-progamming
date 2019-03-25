#include <stdio.h>
#include <stdlib.h>
int avg(int x,int y,int z);
int main()
{
    int a,b,c,d;
    printf("enter 3 integers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("average of %d %d %d = %d",a,b,c,avg(a,b,c));
    return 0;
}
int avg(int x,int y,int z) {
    int n;
    n=(x+y+z)/3;
    return n;

}
