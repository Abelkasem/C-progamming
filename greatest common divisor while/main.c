#include <stdio.h>
#include <stdlib.h>

int main()
{   int u1,u,v,v1,temp;
    printf("Enter two positive integers\n");
    scanf("%d %d",&u1,&v1);
    v=v1;
    u=u1;
    while(v!=0)
    {
        temp =u%v;
        u=v;
        v=temp;

    }
    int gcd=u;
    printf(" the GCD OF %d & %d is %d\n",u1,v1,gcd);
    return 0;
}
