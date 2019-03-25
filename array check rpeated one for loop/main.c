#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6]={2,9,1,0,6,0};
int i,j=0;
for(i=0;i<6;i++){

j=i-j+1;
if(arr[i]!=arr[i-j]) printf("%d",arr[i]);
j++;

}

 return 0;
}

