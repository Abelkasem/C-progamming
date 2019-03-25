#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float a,b;
    printf("Please enter a number followed by operator then the other number  \n");
    scanf("%f %c %f",&a,&op,&b);
    switch (op) {
    case '+': printf("%f + %f = %f",a,b,a+b);
    break;
    case '-': printf("%f - %f = %f",a,b,a-b);
    break;
    case '*': printf("%f * %f = %f",a,b,a*b);
    break;
    case '/': if(b!=0.0)     printf("%f / %f = %f",a,b,a/b);
    else printf(" divide by zero !!");
    break;
    default : printf("unknown operator");
    break;
    }



    return 0;
}
