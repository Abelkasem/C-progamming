#include<stdio.h>
float area=0;
#define PI 3.14
float perimeter=0;
float Radius=0;

float cal_area(float Radius);
float cal_perimeter(float Radius);

int main(){

printf("Enter  Radius\n");
scanf("%f",& Radius);
printf("Radius=%f \n",Radius);
area=cal_area(Radius);
perimeter=cal_perimeter(Radius);



printf("Perimeter of the circle =%f inches\n",perimeter);
printf("Area of the circle =%f square inches\n",area);

}
float cal_area(float Radius){
 float a=PI*(Radius*Radius);
 return a;
}
float cal_perimeter(float Radius){
 float p=  2*Radius*PI ;
 return p;

}
