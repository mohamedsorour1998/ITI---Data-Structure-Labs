#include <stdio.h>
#include <stdlib.h>
#include "LinkedListBubbleSort.h"



int BinarySearch(int item,int Size);
void BubbleSort();

int main()
{
    Add (5);
    Add (1);
    Add (7);
    Add (9);
    Add (3);

    BubbleSort();
    display();

    int data =  BinarySearch(3,5);
    printf("\nthe data corresponding to index of 3 is  %d", data);

    return 0;
}
