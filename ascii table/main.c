#include <stdio.h>
#include <stdlib.h>

int main()
{    printf("\t ASCII\n");
     printf(" Dec \t   Hex \t   char\t \n");

    int i=0;
    for(i=0;i<=127;i++) {

            if(i==10){
            printf(" %d \t  %x \t  \n",i,i);
            continue;}

            printf(" %d \t  %x \t  %c\n",i,i,i);

    }
    char x=7;
    printf("bell %c",x);
    return 0;
}
