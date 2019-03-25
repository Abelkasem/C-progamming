#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[5];
int i=0,sum=0;
   for(i=0;i<5;i++) {printf("enter number %d\n",i);
    scanf("%d",&arr[i]);

   }

    for(i=0;i<5;i++) {
        if (arr[i]%2==0) continue;
            sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}
