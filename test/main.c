#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int*y;
    y=&x;

    printf("x=%d  y=%d   *y=%d\n",x,y,*y);
    return 0;
}
