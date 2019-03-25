#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cash;
    printf("Enter your Cash \n");
    scanf("%d",&cash);
    printf(" your Cash is %d \n",cash);
    if(cash==75)
        printf("C \n");
    else if(cash==100)
        printf("C+F \n");
     else if(cash==150)
        printf("C + F +L \n");
        else printf("Error \n");


    return 0;
}
