#include <stdio.h>
#include <stdlib.h>
int swapp(int *a,int *b);
int main()
{ int x;
  int y;
  printf("Enter two numbers\n");
  scanf("%d %d",&x,&y);
  printf("before swap x=%d \t y=%d\n",x,y);
  swapp(&x,&y);
  printf("after  swap x=%d \t y=%d\n",x,y);
    return 0;
}
int swapp(int *a,int *b) // function take 2 pointers to ints
{

*a^=*b;
*b^=*a;
*a^=*b;
return 0;

}

