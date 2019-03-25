#include <stdio.h>
#include <stdlib.h>

int main()
{  int i,j,x;
    for (i=0;i<7;i++){

       if(i==0) for(j=0;j<i+5;j++) {printf("#");}
       else if (i==3) for(x=0;x<i+1;x++) {printf("#");}
       else printf("#\n");


        }


    return 0;
}
