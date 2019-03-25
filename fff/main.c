#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int main()
{

    int counter, input, test_int;
    _Bool isPrime;

    //printf("For which prime number do you want to know the Value?\n")
    //scanf("%i",&input);


int divisor;
    test_int = 1;
    input = 20;
    counter = 1;

    while ( counter <= input )
    {

        isPrime = TRUE;
        for(  divisor = 2;  divisor < test_int; divisor++ )
        {


            if (test_int%divisor == 0)
            {
                isPrime = FALSE;
                break;
            }
            if (isPrime = TRUE)
            {
                counter++;
                test_int++;
            }



        }



    }







    return 0;

}
