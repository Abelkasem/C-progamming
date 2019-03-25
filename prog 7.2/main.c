#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main (void)
{
    int ratingCounters[11], i, response,n;
    printf ("Enter number of responses\n");
    scanf("%d",&n);
    for ( i = 1; i <= 10; ++i )
    ratingCounters[i] = 0;

    printf ("Enter your responses\n");
    for ( i = 1; i <= n; ++i ) {

    scanf ("%i", &response);
    if(response==999) break;

    if ( response < 1 || response > 10 )

    printf ("Bad response: %i\n", response);
    else
    ++ratingCounters[response];
        }
    printf ("\n\nRating Number of Responses\n");
    printf ("------ -------------------\n");
    for ( i = 1; i <= 10; ++i )
    printf ("%4i%14i\n", i, ratingCounters[i]);
    return 0;
    }
