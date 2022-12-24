#ifndef QUEUE_IN_LINKED_LIST_H_INCLUDED
#define QUEUE_IN_LINKED_LIST_H_INCLUDED
typedef struct Node Node;
struct Node
{
    int Data;
    Node * Next;
    Node * Prev;
};
Node * front= NULL;
Node * rear =NULL;

void display()
{
    Node * current= front;

    while (current != NULL)
    {
        printf("%d   ", current->Data);
        current=current->Next;

    }
}



void EeQueue (int data)
{

//allocation
    Node * NEW =malloc(sizeof(Node));
    NEW -> Prev =NULL;
    NEW -> Next =NULL;
    NEW -> Data =data;

//Insert into Queue
    if (front == NULL)
    {
        front = rear =NEW;
    }
    else
    {
        NEW->Next = front;
        front->Prev = NEW;
        front= NEW;

    }

}

int Dequeue ()
{

    Node * last= rear;
    if ( front == NULL)
    {
        return 0;
    }

    else if (front == rear)
    {
        free(last);
        front = rear= NULL;
        return 1;
    }

    else
    {
        rear = rear->Prev;
        last->Prev = NULL;
        rear->Next=NULL;
        free(last);
        return 1;
    }


}




#endif // QUEUE_IN_LINKED_LIST_H_INCLUDED
