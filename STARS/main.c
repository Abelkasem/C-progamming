#include <stdio.h>
#include <stdlib.h>

int main()
{   int j;
    int i;

    for(i=1;i<=4;i++) {
            for(j=1;j<=5-i;j++) {
                printf(" ");
            }
            for(j=1;j<=i;j++) {
                printf("*");
            }
            printf("\n");
            }
            return 0;
}
