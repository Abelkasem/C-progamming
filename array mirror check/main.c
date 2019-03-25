#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5];

    int i;
    for(i=0;i<=4;i++){
        scanf("%d",&arr1[i]);
        printf("arr1[%d] = %d \n",i,arr1[i]);

    }

    if(arr1[i]==arr1[4-i])
       printf("mirror\n");
   else
        printf("not mirror\n");

    return 0;
}
