#include <stdio.h>
#include <stdlib.h>
void srtfun(int arr1[5]);
int main()
{   int arr[5]={4,3,5,1,2};
int i;
    for(i=0;i<5;i++)
    printf("  %d",arr[i]);
    printf("\n");
    srtfun(arr);
    for (i=0;i<5;i++)
        printf("  %d",arr[i]);
    return 0;
}
void srtfun(int arr1[5]){
int i,j;
for(i=0;i<5;i++)
    for(j=i+1;j<5;j++)
if (arr1[i]>arr1[j])
{
    int temp;
    temp=arr1[i];
    arr1[i]=arr1[j];
    arr1[j]=temp;
}



}
