#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp;
    printf("enter a number min of two digits\n");
    scanf("%d",&n);
    do {
        temp=n%10;
        n=n/10;
        printf("%d",temp);
    }while(n!=0);
    return 0;
}
