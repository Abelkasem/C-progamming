#include <stdio.h>
#include <math.h>

int main()
{   int x1=0,y1=0,x2=0,y2=0;
float Dist=0;
int x_dist=0,y_dist=0;
    printf("Enter X & Y Coordinates of two points x1,y1,x2,y2\n");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    x_dist=x2-x1;
    if(x_dist<0) x_dist*=-1;
    else x_dist=x_dist;
    y_dist=y2-y1;
     if(y_dist<0) y_dist*=-1;
    else y_dist=y_dist;
    Dist= sqrt((y_dist*y_dist)+(x_dist*x_dist));
    printf("DISTANCE =%.4f \n",Dist);
    return 0;
}
