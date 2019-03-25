#include <stdio.h>
#include <stdlib.h>

int main()
{   int year;
    int rem4,rem100,rem400;
    printf("enter a year\n");
    scanf("%d",&year);
    rem4=year%4;
    rem100=year%100;
    rem400=year%400;
    if((rem4==0 && rem100 !=100) || rem400 ==0)
        printf("%d  is a leap year",year);
    else printf("%d is not a leap year",year);
    return 0;
}
