#ifndef STACK_IN_LINKED_LIST_H_INCLUDED
#define STACK_IN_LINKED_LIST_H_INCLUDED

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Prev, *Next;
};
Node *head = NULL;
Node *tail = NULL;

void display()
{
    Node * current= head;

    while (current != NULL)
    {
        printf("%d   ", current->Data);
        current=current->Next;

    }
}
//push
void Push (int data)
//allocation

{Node *NN=malloc(sizeof(Node));

    if( head==NULL)
    {
        head=NN;
        NN->Data=data;
    }
    else
    {
        NN->Next=head;
        head->Prev=NN;
        head=NN;
        NN->Data=data;
    }
}

void Pop(){
if (head==NULL) {
    printf("No Elemnet");
}
else {
Node * last =head;
//int data=0;
head=head->Next;
last->Next=NULL;
head->Prev=NULL;
//data=last->Data;
//return data;
free(last);
}
}

#endif // STACK_IN_LINKED_LIST_H_INCLUDED
