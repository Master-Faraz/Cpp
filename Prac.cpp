#include<iostream>
using namespace std;
int main()
{
  int A[5];
  int *p=A;
  cout<<"\nMemory allocation of Stack : "<<endl;
  for(int i=0;i<5;i++)
    cout<<p+i<<endl;


    int *B=new int[5];
    cout<<"\nMemory allocation of Heap : "<<endl;
    for(int i=0;i<5;i++)
        cout<<B+i<<endl;
  
  return 0;
}