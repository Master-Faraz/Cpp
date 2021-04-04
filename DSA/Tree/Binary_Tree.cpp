#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left=NULL, *right=NULL;
};
Node *t = new Node;

Node *Create()
{
    int x;
    cout << "Enter data of Node ( or Enter 0 for no node ) :  ";
    cin >> x;

    if (x == 0)
    {
        return 0;
    }

    t->data = x;
    cout << "Enter left child of " << x << endl;
    t->left = Create();
    cout << "Enter right child of " << x << endl;
    t->right = Create();

    return t;
}

void preorder(struct Node *t)
{
    if (t!=NULL)
    {
        cout << t->data << endl;
        preorder(t->left);
        preorder(t->right);
    }
}

int main()
{
    Node *root;
    root = 0;
    root = Create();
    preorder(t);
    return 0;
}