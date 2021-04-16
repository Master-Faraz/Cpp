// #include <iostream>
// using namespace std;

// struct Node
// {
//   int data;
//   Node *L_Child = NULL, *R_Child = NULL;
// };

// Node *root = NULL;

// Node * Insert(struct Node *p,int key)
// {
//   Node *t;
//   if(p==NULL)
//   {
//     t=new Node;
//     t->data=key;
//     return p;
//   }
//   else if(p->data<key)
//     p->R_Child=Insert(root->R_Child,key);
//   else if(p->data>key)
//     p->L_Child=Insert(root->L_Child,key);

//   return root;
  
// }

// void Insert(int key)
// {
//   Node *r, *p = root; //            r  is tail Pointer

//   Node *t = new Node; //          Creating New node
//   t->data = key;
//   t->L_Child = t->R_Child = NULL;

//   if (root == NULL) //          If no node is present
//   {
//     p = t;
//     return; //          To break go through next line
//   }

//   while (root)
//   {
//     r = p; //            Assigning tail pointer

//     if (key == p->data) //           If key is already present
//       return;

//     else if (key > p->data) //            If key is greater than go to Right Side
//       p = p->R_Child;

//     else if (key < p->data) //            Else go to Left Side
//       p = p->L_Child;

//     else
//       return;
//   }

//   if (key < r->data)
//     r->L_Child = t;
//   else
//     r->R_Child = t;
// }

// void Inorder(struct Node *p)
// {
//   if (p)
//   {
//     Inorder(p->L_Child);
//     cout << p->data << endl;
//     Inorder(p->R_Child);
//   }
// }

// int main()
// {
//   Node *q;
//   q=Insert(root,50);
//   Insert(q,5);
//   Insert(q,10);
//   Insert(q,20);
//   Insert(q,25);

//   Inorder(q);

//   return 0;
// }


// C++ program to demonstrate insertion
// in a BST recursively.
#include <iostream>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);
};

// Default Constructor definition.
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data)
	{
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

// Driver code
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);
	return 0;
}

// This code is contributed by pkthapa
