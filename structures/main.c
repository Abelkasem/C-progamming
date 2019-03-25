#include <stdio.h>
#include <stdlib.h>

struct date {
int day;
int month;

int year;
int *ptr;


}holiday={25,1,2016}; // variable defined & initialized of type struct date
int main()
{

   struct date birthday,*ptr1; // ptr1 is a pointer to structure date variable
   ptr1=&holiday;   // ptr1 is pointing to holiday struct date variable

   birthday.day=10;
   birthday.month=10;
   birthday.year=1991;
  // ptr1=&x;

    printf("your birth day is %d/%d/%d\n",birthday.day,birthday.month,birthday.year);
//    *ptr1.birthday.day=5;
    printf("holiday is %d/%d/%d\n",holiday.day,holiday.month,holiday.year);
    (*ptr1).day=6;   //to access or assign value to a structure member using pointer to that structure variable
    ptr1->month=10;
    printf("holiday is %d/%d/%d\n",holiday.day,holiday.month,holiday.year);
    printf("%d",*(ptr1+1));
    return 0;
}
