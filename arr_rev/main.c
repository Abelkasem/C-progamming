#include <stdio.h>
#include <stdlib.h>

int main()
{
     int s=5;
     int arr[5] = {1, 2, 3,5,6};
int arr1[5]={0};
    int i=0,j=0;
printf("arr[] = { ");
    for(i=0;i<s;i++)
    printf("%d ",arr[i]);
s=s-1;
for(i=0;i<=s;i++)
    arr1[i]=arr[s-i];

printf("\n");

    printf("arr[] = { ");
    s++;
    for(i=0;i<s;i++)
    printf("%d ",arr1[i]);
    return 0;
}
