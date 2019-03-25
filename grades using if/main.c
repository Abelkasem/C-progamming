#include <stdio.h>
#include <stdlib.h>

int main()
{   int g; //grade
printf("Enter Your Grade from 0 to 100\n");
    scanf("%d",&g);
    printf("your grade = %d\n",g);
    if(g>=90) {printf("your score is A");}
    else if (g>=80 && g<90)  {printf("your score is B");}
    else if (g>=70 && g<80)  {printf("your score is C");}
    else if (g>=60 && g<70)   {printf("your score is D");}
    else    {printf("your score is F");}
    return 0;
}
