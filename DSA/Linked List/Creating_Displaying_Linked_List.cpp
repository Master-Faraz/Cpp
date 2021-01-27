#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next; // Pointer to next node
}
    *first = NULL; //  Global Pointer

void create(int A[], int n) // Array and sizeof array
{
  Node *t, *last;

  first = new Node;
  first->data = A[0]; // Initializing first node
  first->next = NULL;
  last = first;

  for (int i = 1; i < n; i++) // Initializing other nodes
  {
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p) // For Displaying linked list
{
  while (p != NULL)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

void Recursive_Display(struct Node *p)
{
  if (p != NULL)
  {
    cout << p->data << endl;
    Recursive_Display(p->next);
  }
}

void Recursive_Reverse_Display(struct Node *p)
{
  if (p != NULL)
  {
    Recursive_Display(p->next);
    cout << p->data << endl;
  }
}

int Count_nodes(struct Node *p)
{
  int count = 0;
  while (p != NULL)
  {
    count++;
    p = p->next;
  }
  return count;
}

int Sum(struct Node *p)
{
  int sum = 0;
  while (p) // p != NULL
  {
    sum = sum + p->data;
    p = p->next;
  }
  return sum;
}

int Sum_Recursion(struct Node *p) // It takes memory in stack
{
  if (p == 0)
    return 0;
  else
    return Sum_Recursion(p->next) + p->data;
}

int maximum(struct Node *p)
{
  int n = p->data;

  while (p) // p != NULL or 0
  {
    if (p->data > n)
    {
      n = p->data;
    }

    p = p->next;
  }
  return n;
}

int search(struct Node *p, int key)
{
  int count = 0;
  while (p)
  {
    if (p->data == key)
      return count;

    count++;
    p = p->next;
  }
  return -101;
}

// When Key is found then move that link to first node  -->  Improved Search

int improved_search(struct Node *p, int key)
{
  Node *q = NULL;
  int count = 0;
  while (p)
  {
    if (p->data == key)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return count;
    }
    else
    {
      count++;
      q = p;
      p = p->next;
    }
  }
}

int main()
{
  int A[] = {1, 21, 300, 54, 50, 6, 07, 8};

  create(A, 8);

  cout << "\nSearch found at index : " << improved_search(first, 50) << endl;
  display(first);

  return 0;
}