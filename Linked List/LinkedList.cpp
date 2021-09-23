#include <iostream>


using namespace std;

typedef struct Node{
        int data;
        Node* nextPtr;

    } Node;
typedef Node* nodePtr;

void Insert(nodePtr previous, int data);
void ListSearch(nodePtr head);


int main(void)
{
    nodePtr head;
    head = new Node;
    head->data =10;
    head->nextPtr=NULL;
    Insert(head,20);
    Insert(head,30);
    Insert(head,40);
    Insert(head,50);
    Insert(head,60);
    ListSearch(head);
    return 0;
}

void Insert(nodePtr head, int data){

    nodePtr lastNode=head;
    while (!(lastNode->nextPtr==NULL))
    {
        lastNode = lastNode->nextPtr;
    }
    
    nodePtr tempPtr;
    tempPtr = new Node;
    tempPtr ->data = data;
    tempPtr->nextPtr=NULL;
    lastNode->nextPtr = tempPtr;
}

void ListSearch(nodePtr head){
    nodePtr tempPtr = head;
    do {

        cout << tempPtr->data << endl;
        tempPtr = tempPtr->nextPtr;

    }while (!(tempPtr==NULL));


    
}