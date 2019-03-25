#include <stdio.h>
#include <stdlib.h>
float f2c(float temp);
int main()
{   float ftempr,ctempr;
    printf("Enter temp in Fahrenheit \n");
    scanf("%f",&ftempr);
    ctempr=f2c(ftempr);
    printf(" temp in C =%f \n",ctempr);
    return 0;
}
float f2c(float temp){
    float conv;
    conv=(temp-32)/1.8;
    return conv;


}
