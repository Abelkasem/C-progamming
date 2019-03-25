#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[6]={1,2,1,3,6,2};
int i,j,f;
for(i=0;i<6;i++){
f=0;
{for(j=0;j<i;j++)

if(arr[i]==arr[j])
f++;
}
if(f==0) printf("%d",arr[i]);
}

    return 0;
}
