#include <stdio.h>
#include <stdlib.h>

int main()
{   int values[10];
    int index;
    for(index=0;index<10;index++)
        {values[index+1]=values[index]+1;
         printf("values[%i] = %i\n", index, values[index]);}
   // for(index=0;index<10;index++)

    return 0;
}
