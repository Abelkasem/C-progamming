#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,res;
    for(n=5;n<=50;n=n+5)
    {
    res=(n*(n+1))/2;
     printf("n=%2i   & triangular of n =%2i\n",n,res);
    }

    return 0;
}
