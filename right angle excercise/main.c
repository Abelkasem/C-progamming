#include <stdio.h>

int IsRight(int a,int b,int c){
    if((a!=0)&&(b!=0)&&(c!=0)) {
if ((a*a)==((b*b)+(c*c))) {return a;}
else if ((b*b)==((a*a)+(c*c))) {return b;}
else if ((c*c)==((a*a)+(b*b))) {return c;}
else return 0;
    }
    else return 0;




}

int main()
{  int x=0,y=0,z=0;
    int r=0;

    printf("Enter triangle sides lengths\n");
    scanf("%d %d %d",&x,&y,&z);
   r= IsRight(x,y,z);
   if(r==0){printf("not right angle\n");}
   else if(r==x) {printf("x is right angle\n");}
    else if (r==y) {printf("y is right angle\n");}
    else if (r==z) {printf("z is right angle\n");}
    else printf("not right angle\n");





   // if(r) printf("is right angle\n");
   // else printf("not right angle\n");
    return 0;
}
