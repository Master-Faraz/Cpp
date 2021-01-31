#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next; // Pointer to next node
}
    *first = NULL,
    *second = NULL, *third = NULL; //  Global Pointers

void create1(int A[], int n);

void create2(int A[], int n);

void display(struct Node *p);

void Recursive_Display(struct Node *p);

void Recursive_Reverse_Display(struct Node *p);

int Count_nodes(struct Node *p);

int Sum(struct Node *p);

int Sum_Recursion(struct Node *p);

int maximum(struct Node *p);

int search(struct Node *p, int key);

int improved_search(struct Node *p, int key);

void insert(struct Node *p, int key, int index);

void creating_using_insert_function(struct Node *p);

void insert_last(int key);

void insert_sorted(struct Node *p, int key);

void del(int position);

void duplocate(struct Node *p);

void reversing(struct Node *p);

void recursive_reversing(struct Node *p, struct Node *q);

void Merge_sorted(struct Node *p, struct Node *q);

// *****_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-*****

int main()
{
  int A[] = {10, 20, 30, 40, 50}, B[] = {5, 15, 25, 35, 45, 55, 65};

  create1(A, 5);
  create2(B, 7);

  Merge_sorted(first, second);
  display(third);

  delete first;
  delete second;

  return 0;
}

//   ***************************************************************************************************

void create1(int A[], int n) // Array and sizeof array
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

//  *********************************************************************************

void create2(int A[], int n) // Array and sizeof array
{
  Node *t, *last;

  second = new Node;
  second->data = A[0]; // Initializing first node
  second->next = NULL;
  last = second;

  for (int i = 1; i < n; i++) // Initializing other nodes
  {
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

//    *************************************************************************************************

void display(struct Node *p) // For Displaying linked list
{
  while (p != NULL)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

//  *******************************************************************************************************

void Recursive_Display(struct Node *p)
{
  if (p != NULL)
  {
    cout << p->data << endl;
    Recursive_Display(p->next);
  }
}

//  *******************************************************************************************************

void Recursive_Reverse_Display(struct Node *p)
{
  if (p != NULL)
  {
    Recursive_Display(p->next);
    cout << p->data << endl;
  }
}

//  *******************************************************************************************************

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

//*******************************************************************************************************

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

// *****************************************************************************************************

int Sum_Recursion(struct Node *p) // It takes memory in stack
{
  if (p == 0)
    return 0;
  else
    return Sum_Recursion(p->next) + p->data;
}

//   *****************************************************************************************************

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

//   *************************************************************************************************

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

//  ****************************************************************************************************

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
  cout << "\n\n Error Key not found :";
  delete[] q;
  return -101;
}

//     **************************************************************************************************

void insert(struct Node *p, int key, int index)
{
  Node *q = new Node; // Creating New node
  q->data = key;
  int count = 0;

  if (index == 0)
  {
    q->next = p;
    first = q;
  }
  while (p)
  {
    if (count == index - 1)
    {
      q->next = p->next;
      p->next = q;
      break;
    }
    else
    {
      count++;
      p = p->next;
    }
  }
}

//    ****************************************************************************************************

void creating_using_insert_function(struct Node *p)
{
  int size;
  cout << "\nEnter size of Linked List you want to create : ";
  cin >> size;

  cout << "Enter " << size << " Elements \n\n";
  for (int i = 0; i < size; i++)
  {
    int temp = 0;
    cin >> temp;
    insert(first, temp, i);
  }
}

//   *****************************************************************************************************

void insert_last(int key)
{
  Node *q = new Node;
  q->data = key;
  q->next = NULL;

  Node *temp = first;
  if (temp == NULL)
  {
    temp = first = q;
  }
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = q;
  }
}

//   *****************************************************************************************************

void insert_sorted(struct Node *p, int key)
{
  Node *q = new Node, *t;
  q->data = key;
  q->next = NULL;

  if (first == NULL)
  {
    first = q;
  }
  else
  {
    while (p && p->data < key)
    {
      t = p;
      p = p->next;
    }
    if (p == first) // Checking whether it is first node   -->  insert in LHS
    {
      q->next = first;
      first = q;
    }
    else //  insetting between  t and p
    {
      q->next = t->next;
      t->next = q;
    }
  }
}

//    ****************************************************************************************************

void del(int position)
{
  Node *q = NULL;
  Node *p = first;
  if (position == 1)
  {
    q = first;
    first = first->next;
    delete p;
  }
  else
  {
    for (int i = 0; i < position - 1; i++)
    {
      q = p;
      p = p->next;
    }
    q->next = p->next;
    delete p;
  }
}

//  ****************************************************************************************************

void duplocate(struct Node *p)
{
  Node *q = first;
  p = first->next;

  while (p)
  {
    if (p->data != q->data)
    {
      q = p;
      p = p->next;
    }
    else
    {
      q->next = p->next;
      delete p;
      p = q->next;
    }
  }
}

//   ****************************************************************************************************

void reversing(struct Node *p)
{
  p = first;
  Node *q = NULL;
  Node *r = NULL;

  while (p)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}

//   ***************************************************************************************************

void recursive_reversing(struct Node *q, struct Node *p)
{
  if (p != NULL)
  {
    recursive_reversing(p, p->next);
    p->next = q;
  }
  else
  {
    first = q;
  }
}

//   ***********************************************************************************************

void Merge_sorted(struct Node *p, struct Node *q)
{
  Node *last;

  if (p->data < q->data)
  {
    third = last = p;
    p = p->next;
    third->next = NULL;
  }
  else
  {
    third = last = q;
    q = q->next;
    third->next = NULL;
  }

  while (p && q)
  {
    if (p->data < q->data)
    {
      last->next = p;
      last = p;
      p = p->next;
      last->next = NULL;
    }
    else
    {
      last->next = q;
      last = q;
      q = q->next;
      last->next = NULL;
    }
  }
  if (p)
    last->next = p;
  if (q)
    last->next = q;
}
