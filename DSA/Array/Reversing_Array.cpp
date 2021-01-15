#include<iostream>
using namespace std;

struct arrays
{
  int size;
  int *A=new int[size];
};

void initialize(struct arrays &arr)                  // Initializing array
{
  cout<<"Enter "<<arr.size<<" integers "<<endl;
  for(int i=0;i<arr.size;i++)
  {
    cin>>arr.A[i];
  }
}

void print(struct arrays arr)
{
  for(int i=0;i<arr.size;i++)
  {
    cout<<arr.A[i]<<endl;
  }
}

void reverse1(struct arrays &arr)
{
  int *b=new int[arr.size];

  for(int i=arr.size-1 ,j=0  ;  i>=0  ;  i--,j++)                               // ****  Important  ****
  {
    b[j]=arr.A[i];
  }

  for(int i=0;i<arr.size;i++)
  {
    arr.A[i]=b[i];
  }

  delete []b;
  b=NULL;
}


int main()
{
  struct arrays arr;
  cout<<"Enter size of array you want to create : "<<endl;
  cin>>arr.size;

  initialize(arr);
  reverse1(arr);
  print(arr);


  return 0;
}