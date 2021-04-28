#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *L_Child = NULL, *R_Child = NULL;
};

Node *root = NULL;

void Insert(int key)
{
  Node *r, *p = root; //            r  is tail Pointer

  Node *t = new Node; //          Creating New node
  t->data = key;
  t->L_Child = t->R_Child = NULL;

  if (root == NULL) //          If no node is present
  {
    p = t;
    return; //          To break go through next line
  }

  while (root)
  {
    r = p; //            Assigning tail pointer

    if (key == p->data) //           If key is already present
      return;

    else if (key > p->data) //            If key is greater than go to Right Side
      p = p->R_Child;

    else //            Else go to Left Side
      p = p->L_Child;
  }

  if (r->data > key)
    r->L_Child = t;

  else
    r->R_Child = t;
}

void Inorder(struct Node *root)
{
  if (root != NULL)
  {
    Inorder(root->L_Child);
    cout << root->data << endl;
    Inorder(root->R_Child);
  }
}

int main()
{
  Insert(50);
  Insert(5);
  Insert(10);
  Insert(20);
  Insert(25);

  Inorder(root);
  return 0;
}