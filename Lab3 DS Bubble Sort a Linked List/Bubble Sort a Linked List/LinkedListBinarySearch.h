#ifndef LINKEDLISTBUBBLESORT_H_INCLUDED
#define LINKEDLISTBUBBLESORT_H_INCLUDED

typedef struct Node Node;

struct Node {
int Data;
Node * Next;
Node * Prev;
};
Node * head = NULL;
Node * tail = NULL;


void Add(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        newNode->Prev = tail;
        tail = newNode;
    }
}

void display()
{
    Node * current= head;

    while (current != NULL)
    {
        printf("%d   ", current->Data);
        current=current->Next;

    }
}


int GetDataByIndex (int index)
{
    int i=0;
    int data=0;
    Node * current = head;

    while (current != NULL)
    {
        if (i == index)
        {
            data =current-> Data;
            return data;
        }
        else
        {
            current = current -> Next;
            i++;

        }
    }
    return -1;
}

int BinarySearch(int item ,int Size){

int min = 0;
int max = Size -1;

while ( min <= max ) {
    int mid = (max+min) /2;

    if (item == mid) {
int result = GetDataByIndex (mid);
return result;
    }

    if (item > mid) {
min= mid+1;
    }


    if (item < mid) {
max= mid-1;
    }

}

return -1;

}







#endif // LINKEDLISTBUBBLESORT_H_INCLUDED
