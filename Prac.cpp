#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
} * first=NULL; // Global Pointer

void create(int A[], int len) // Creating using array
{
  Node *last;
  first = new Node;

  first->data = A[0];
  first->next = NULL;
  last = first;

  for (int i = 1; i < len; i++)
  {
    Node *q = new Node;
    q->data = A[i];
    q->next = NULL;
    last->next = q;
    last = q;
  }
}

void display(struct Node *p)
{
  while (p)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

void reverse_display(struct Node *p)
{
  if (p != NULL)
  {
    reverse_display(p->next);
    cout << p->data << endl;
  }
}

void insert(struct Node *p, int key, int index)
{
  Node *q = new Node;
  q->data = key;
  int count = 0;

  if(index==0)
  {
    q->next=p;
    first=q;
  }

  while (p)
  {
    if (count == index - 1)
    {
      q->next = p->next;
      p->next = q;
    }
    count++;
    p=p->next;
  }
}

void insert_last(int key)
{
  Node *q=new Node;
  q->data=key;
  q->next=NULL;

  Node *temp=first;
  if(temp==NULL)
  {
    temp=first=q;
  }
  else
  {
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=q;
  }
  


  
}

int main()
{

    insert_last(100);
    insert_last(200);
    insert_last(300);

  display(first);
  return 0;
}