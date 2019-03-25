#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,temp,r=0;
    printf("enter a number min of two digits\n");
    scanf("%d",&n);
    while(n!=0){
        temp=n%10;
        n=n/10;
        r=r+temp;
        printf("%d   sum=%d",temp,r);
    }
    return 0;
}
