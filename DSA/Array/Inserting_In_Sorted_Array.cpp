#include<iostream>
using namespace std;
int main()
{
  int size=6,length;

  cout<<"Enter size of array : ";
  cin>>size;
  cout<<"Enter length of array you want to create : ";
  cin>>length;

  int A[6]={1,2,4,5,6};                 // Here 6 is size
  int n=3;                             //inserting 3

  int i=length-1;                     // Index 

  while (A[i]>n) 
  {
    A[i+1]=A[i];
    i--;
  }
  A[i+1]=n;

  for(int i=0;i<6;i++)
  {
    cout<<A[i]<<endl;
  }

  return 0;
}