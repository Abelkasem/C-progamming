#include <stdio.h>
#include <stdlib.h>

float pwr(float b,int p);
int main()
{   float x=2.55;
   // printf("Enter base number & power \n");
   // scanf("%d  %d",&ba,&po);
    float res;
    res=(3)*(pwr(x,3))-(5)*(pwr(x,2))+6;
    printf(" res=%f \n",res);
    return 0;
}
float pwr(float b,int p){
    int i;
    float R=1;
    for(i=1;i<=p;i++) {

        R*=b;
    }
    return R;


}
