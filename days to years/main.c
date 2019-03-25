#include <stdio.h>
#include <stdlib.h>

int main()
{   int Ndays=0,years=0,weeks=0,Days=0,temp=0;

    printf("Enter number of days\n");
    scanf("%d",&Ndays);
    printf("Number of days: %d\n",Ndays);
    years=Ndays/365;
    temp=Ndays%365;
    weeks=temp/7;
    temp=temp%7;
    Days=temp;

    printf("Years : %d\n",years);
    printf("Weeks : %d\n",weeks);
    printf("Days : %d\n",Days);
    return 0;
}
