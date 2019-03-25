#include <stdio.h>
#include <stdlib.h>

int main()
{   int l=5,m=0;

    struct intptr{
    int *p1;
    int *p2;

    }pint; // pint is a stucture variable of intptr
    pint.p1=&l;
    pint.p2=&m;
    *(pint).p2=22;


    printf("%d  %d\n",l,*pint.p1);
    printf("%d  %d\n",m,*pint.p2);
    return 0;
}
