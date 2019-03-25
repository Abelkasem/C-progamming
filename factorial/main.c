#include <stdio.h>
#include <stdlib.h>
int factr(int x);
int main()
{
    int r,n;
    printf("enter number\n");
    scanf("%d",&n);
    r=factr(n);
    printf("factorial of %d =%d",n,r);
    return 0;
}

int factr(int x){
if(x==1 || x==0)
    return 1;
else
    return (x*factr(x-1));

}
