#include<iostream>
using namespace std;

void init(int A[],int size)
{
  cout<<"Enter "<<size<<" integers "<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>A[i];
  }
}

void print(int A[],int size)
{
  cout<<"integers are \n"<<endl;
  for(int i=0;i<size;i++)
  {
    cout<<A[i]<<endl;
  }
}

int main()
{
  int size=1;
  cout<<"Enter size of array : ";
  cin>>size;
  int a[size]={0};

  init(a,size);
  print(a,size);

  return 0;
}