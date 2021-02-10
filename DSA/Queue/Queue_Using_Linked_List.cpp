#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL, *second = NULL;


void enqueue(int x)
{
    Node *q = new Node;

    if (q == NULL) //                                           Heap is full
        cout << "Queue overloaded  *_* " << endl;
    else
    {
        q->data = x;
        q->next = NULL;

        if (first == NULL) //                                 Checking if first element or not
        {
            first = second = q;
        }
        else
        {
            second->next = q;
            second = q;
        }
    }
}

int dequeue()
{
    int x;
    if (first == NULL)
        cout << "Queue Empty" << endl;
    else
    {
        Node *q = first;
        x=first->data;
        first = first->next;
        delete q;
    }
    return x;
}

void display(struct Node *p)
{

    while (p)
    {
        cout << first->data << endl;
        first = first->next;
    }
}

int main()
{
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    cout<<"\nDeleted value of queue is "<<dequeue()<<endl;
    display(first);

    return 0;
}