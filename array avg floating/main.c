#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    float avg=0;
    float fltary[10]={1,2.4,3.6,4.5,7,6,8.7,9.3,2.9,5.8};
    for(i=0;i<10;i++)
    {
        avg+=fltary[i];
    }
    printf("avg=%.2f\n",avg);
    return 0;
}
