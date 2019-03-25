#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{   float R;
    printf("Enter The Radius of the circle :\n");
    scanf("%f",&R);
    printf("Radius = %f \n",R);
    printf("AREA oF The Circle = %f \n",(R*R*PI));
    printf("Circumference  oF The Circle = %f \n",(2*R*PI));
    return 0;
}
