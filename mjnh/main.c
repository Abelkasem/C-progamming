#include <stdio.h>
#include <stdlib.h>

char array_place[100] = "don't panic";
char *ptr_place = "don't panic";

int main()
{
    char a = array_place[7];
    char b = *(ptr_place+3);

 printf("%c \n", a);
    printf("%c\n",b);
    return 0;
}
