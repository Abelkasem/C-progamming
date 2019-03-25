#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,fib[10];
    fib[0]=0;
    fib[1]=1;

    for(i=2;i<=10;i++){

        fib[i]=fib[i-1]+fib[i-2];
        printf("%2i\n",fib[i]);

    }


    return 0;
}
