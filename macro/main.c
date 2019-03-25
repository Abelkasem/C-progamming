#include <stdio.h>
#include <stdlib.h>
#define  MERC 1
#define  BMW 2
#define CAR BMW


int main()
{
    #if CAR == BMW
    printf("BMW\n");
    #elif CAR == MERC
    printf("MERC\n");
    #endif

    return 0;
}
