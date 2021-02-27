#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};


Node * Create() 
{
    int x;
    Node *t = new Node;
    cout << "Enter data ( Enter 0 for no Node ) :  ";
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

int main()
{
    Node *root;
    root=0;
    root=Create();
    return 0;
}