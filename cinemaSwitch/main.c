#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cash;
    printf("Enter your Cash \n");
    scanf("%d",&cash);
    printf(" your Cash is %d \n",cash);
    switch (cash) {
    case 150 : printf("L"); printf("+");

    case 100:  printf("F"); printf("+");

    case 75: printf("C \n");


    }




    return 0;
}
