#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
}*head;

void create(int A[],int n);

void display(struct Node *p);

int main()
{
  int A[]={1,2,3,4,5};
  create(A,5);
  display(head);
  return 0;
}


void create(int A[],int n)
{
    struct Node *t,*last;

    head =new Node;
    head->data=A[0];
    head->next=head;         // Circular Linked List
    last=head;

    for(int i=1;i<n;i++)
    {
        Node *t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}

void insert(struct Node *p,int key,int index)
{
    Node *q=new Node;
    
}