#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,i;

    for(n=1;n<=10;n++){f=1;
    for(i=1;i<=n;i++)
    {

       if(n>1)     f=f*i;}



printf("n=%2i  factorial of n=%2i\n",n,f);}


    return 0;
}
