#include <stdio.h>
#include <stdlib.h>
int S=10,stak[10],top=-1;
int push(int);
int pop(int);
int main()
{   int b,i;
for(i=0;i<11;i++){
    b = push(i);
  if(b)   printf("push success & stak[%d]=%d\n",top,stak[top]);
  else printf("push fail");}
    return 0;
}
int push(int a) {
    if(top==S-1) {  printf("Stack OverFlow\n");
                    return 0;}

    else top++;
    stak[top]=a;
    return 1;


}
