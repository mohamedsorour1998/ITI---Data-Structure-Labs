#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
int main()
{
    Add (3);
    Add (5);
    Add (7);
    Add (9);
    InsertAfter (800, 7);

    display();

    int counter = GetCount();
    printf("\nNumber of Nodes: %d\n", counter);


    int date= GetDataByIndex (0);
    printf("\nThe Data in the node is : %d\n", date);








    /*

        int data = GetDataByIndex(2);
        printf("Data of Index : %d\n", data);
        //InsertAfter(5,0);
    */

    return 0;
}
