#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5]={6,7,8,9,10};
    int arr2[5];
    int i;
    for(i=0;i<=4;i++){
        //arr2[i]=arr1[4-i];
        printf("arr2[%d] = %d \n",i,arr1[4-i]);
    }

    return 0;
}
