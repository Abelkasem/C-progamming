#include <stdio.h>
#include <stdlib.h>
struct person {
int age;
short id;
char name[5];

};
int main()
{  struct person p1;
struct person p2;
printf("enter p1 data name,age,id\n");

    scanf("%s",p1.name);
    printf("name =%s",p1.name);
    scanf("%d",&(p1.age));
    scanf("%d",&(p1.id));
    printf("age=%d   id=%d \n",p1.age,p1.id);
    printf("enter p2 data name,age,id\n");

    scanf("%s ",p2.name);
    scanf("%d",&(p2.age));
    scanf("%d",&(p2.id));
    printf("name = %s   age=%d   id=%d \n",p2.name,p2.age,p2.id);











    return 0;
}
