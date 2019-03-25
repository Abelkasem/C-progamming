#include <stdio.h>
#include <stdlib.h>

int main()
{   struct entry {
    int value;
    struct entry *next;


}n1;
struct entry n2,n3;
  n1.value=100;
  n2.value=200;
  n3.value=300;
  n1.next=&n2;
  n2.next=&n3;

    printf("%d\n",n1.value); // value of n1
    printf("%d\n",n1.next->value); //value of n2
    printf("%d\n",n1.next->next->value); //value of n3


     struct entry n2_3;  // inserting node n2_3 after n2
     n2_3.value =250;
    n2_3.next=n2.next;  // first link n2_3 with what was n2 points to (n2.next)
    n2.next=&n2_3;     // secondly link n2_3 to n2 by making n2.next pints to n2_3 address
    printf("%d\n",n2_3.value);
    n1.next=n2.next; // removes n2 from list by making next of node 1 points to node n2_3
    printf("%d\n",n1.next->value); // value of n2_3

    // list pointer is a pointer that points to the start address of the list ,to the first node n1
    struct entry *list_pointer =&n1;
    /* to identify the end of the list make the last element in the list points to NULL pointer which is a pointer points to
    0  */
    n3.next=NULL;
    while (list_pointer !=NULL){
        printf(" list number %i print %i\n",list_pointer ,list_pointer->value);
    list_pointer=list_pointer->next; }
    return 0;
}
