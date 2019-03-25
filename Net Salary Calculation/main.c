#include <stdio.h>
#include <stdlib.h>
#define Social_Security 6.5
#define Tax 15

int main()
{   float Gross;
    printf("Please Enter Your Gross Salary\n");
    scanf("%f",&Gross);
    printf("Your Gross Salary is %f\n",Gross);
    float cut_ratio =(Social_Security+Tax)/100;
    float cut_value = cut_ratio*Gross;
    float Net = Gross-cut_value;
    printf("Your Net Salary is %f\n",Net);





    return 0;
}
