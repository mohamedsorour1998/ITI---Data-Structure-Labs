#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Prev, *Next;
};

Node *head = NULL, *tail = NULL;

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



Node* GetNodeByData(int data)
{
    Node *current = head;

    while(current != NULL)
    {
        if(data == current->Data)
            return current;

        current = current->Next;
    }

    return NULL;
}
void InsertAfter (int data, int afterDate)
{
//where are we?
    Node * nodebeforenew = GetNodeByData (afterDate);
// allocation
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;
// inserting
    if (nodebeforenew !=  NULL)
    {
        newNode->Next = nodebeforenew-> Next;
        newNode->Prev = nodebeforenew;
        nodebeforenew-> Next-> Prev = newNode;
        nodebeforenew-> Next = newNode;
    }
    else
    {
        printf("ERROR!");

    }


}

int GetCount()
{
    int counter=0;
    Node * current = head;
    while (current != NULL)
    {
        current = current -> Next;
        counter++;
    }
    return counter;
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

#endif // LINKEDLIST_H
