#include <stdio.h>
#include <stdlib.h>

int main()
{   char id[10];
    int h=0;
    float wage=0;
    float salary=0;
int i=0;
    printf("Input the Employees ID(Max. 10 chars) \n");

    for(i=0;i<10;i++) {scanf("%c",&id[i]);
    if (id[i]==0xA) break;

    }
    printf("Input the working hrs \n");
    scanf("%d",&h);

    printf("Input Salary amount/hr \n");
    scanf("%f",&wage);
salary=wage*h;
    printf(" the Employees ID %s \n",id);
     printf(" the Employees salary %.2f \n",salary);
    return 0;
}
