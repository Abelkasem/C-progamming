#include <stdio.h>
#include <stdlib.h>

int main() {
 int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    t=((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:c;
                    printf("%d",t);
    //if(a>b&&a>c)
        //printf("%d\n",a);
    //else if(b>a&&b>c)
      //  printf("%d\n",b);
    //else printf("%d\n",c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
