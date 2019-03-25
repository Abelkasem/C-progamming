#include <stdio.h>
#include <stdlib.h>

int main()
{   int x=0,y=0,z=0;
    int max=0;
    printf("enter 3 integers \n");
    scanf("%d %d %d",&x,&y,&z);
    max=((x>y) &&( x>z))?x:(y>z)?y:z;
    printf("max is %d \n",max);
    return 0;
}
