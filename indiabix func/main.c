#include<stdio.h>
int fun(int, int);

int proc(int (*)(), int, int);

int main()
{
    printf("%d\n", proc(fun, 6, 6));
    return 0;
}
int fun(int a, int b)
{
   return (a==b);
}
int proc(int (*p)(), int a, int b)
{
   return ((*p)(a, b));
}
