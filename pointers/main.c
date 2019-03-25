#include <stdio.h>
#include <stdlib.h>
int swapp(char *a,char *b);

int main()
{ char x=5;
  char y=6;
  printf("before swap x=%d \t y=%d\n",x,y);
  swapp(&x,&y);
    printf("after swap x=%d \t y=%d\n",x,y);
    return 0;
}
int swapp(char *a,char *b) {
    char temp;
     temp=*a;
     *a=*b;
     *b=temp;
     return 0;


}
