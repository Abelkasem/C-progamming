#include <stdio.h>
#include <stdlib.h>

int pwr(int b,int p);
int main()
{   int ba,po;
    printf("Enter base number & power \n");
    scanf("%d  %d",&ba,&po);
    int result=pwr(ba,po);
    printf(" %d power %d =%d \n",ba,po,result);
    return 0;
}
int pwr(int b,int p){
    int i;
    int R=1;
    for(i=1;i<=p;i++) {

        R*=b;
    }
    return R;


}
