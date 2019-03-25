#include <stdio.h>
#include <stdlib.h>

int Next_multiple (int b,int p);
int main()
{   int ba,po;
    printf("Enter two numbers   \n");
    scanf("%d  %d",&ba,&po);
    int result=Next_multiple (ba,po);
    printf(" %d rounded to next multiple of %d  is %d \n",ba,po,result);
    return 0;
}
int Next_multiple (int b,int p){

    return b+p-b%p;


}
