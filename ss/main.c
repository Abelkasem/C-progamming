#include <stdio.h>
#include <stdlib.h>
unsigned char rot(unsigned char x,char n) {
    char temp;
    int i;
    for(i=1;i<=n;i++)
    temp=(x<<i)|(x>>(8-i));
 printf("%d\n",x);
return temp;

}
int main()
{

    unsigned char h;
    h= rot(129,2);
    printf("%d\n",h);
    return 0;
}
