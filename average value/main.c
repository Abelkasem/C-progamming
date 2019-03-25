#include <stdio.h>
#include <stdlib.h>

int main()
{  float w_i1=15;
    float n_i1=5;
     float w_i2=25;
    float n_i2=4;
    float AV_w;
    AV_w=((w_i1*n_i1)+(w_i2*n_i2)) / (n_i1+n_i2) ;
    printf("average value of item=%f",AV_w);
    return 0;
}
