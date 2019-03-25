#include <stdio.h>
#include <stdlib.h>
#define eps 0.00001
float abso(float t){
if(t<0)
            t=-t;
            return t;
}
float sqr(float x) {
    float g;
    if(x<0)
      printf("error sqrt of negative \n");
      return -1.0;
   // while(abso(g*g-x)>=eps)
       // g=(x/g+g)/2.0;
       for(g=1.0;abso(g*g-x)>=eps;)
        g=(x/g+g)/2.0;
        return g;
}
int main()
{   float r,n;
    it: printf("enter a number\n");
    scanf("%f",&n);
    r=sqr(n);
    if(r=-1.0) goto it;
    printf("sqrt(%f) = %f\n",n,r);
    return 0;
}
