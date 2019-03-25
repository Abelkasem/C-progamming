#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x=0;
     int y=0;  int z=0; int l=0; int m=0;
     int n=0;
     int i;

    int arr[6]={1,2,1,3,6,2};
     for(i=0;i<=6;i++){

       if(arr[1]==arr[i-1]) y++;
       if(arr[2]==arr[i-1]) z++;
       if(arr[3]==arr[i-1]) l++;
       if(arr[4]==arr[i-1]) m++;
       if(arr[5]==arr[i-1]) n++;
     }

    printf("x=%d y=%d z=%d l=%d m=%d n=%d\n",x,y,z,l,m,n);
    return 0;
}
