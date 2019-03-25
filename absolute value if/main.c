#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("enter an integer number\n");
    scanf("%d",&i);
    if(i<0) printf("absolute value of %d is =%d",i,-i);
    else printf("absolute value of %d is =%d",i,i);
    return 0;
}
