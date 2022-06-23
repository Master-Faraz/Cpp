//                  **** Swaping using call by reference **** 
#include<iostream>
using namespace std;
int swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{
  int x,y;
  cout<<"Enter first number "<<endl;
  cin>>x;
  cout<<"Enter second number "<<endl;
  cin>>y;
  cout<<" Before swaping x= "<<x<<" y= "<<y<<endl;
  swap(&x,&y);
    cout<<" After swaping x= "<<x<<" y= "<<y<<endl;
  return 0;
}