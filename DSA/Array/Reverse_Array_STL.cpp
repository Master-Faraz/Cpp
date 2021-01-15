#include<iostream>
#include<algorithm>
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

void reverse(struct arrays &arr)
{
    int s=arr.size;
    reverse(arr.A,arr.A +s);          // reverse( array , array + size)
}

int main()
{
  struct arrays arr;
  cout<<"Enter size of array you want to create : "<<endl;
  cin>>arr.size;

  initialize(arr);
  reverse(arr);
  cout<<"After reversing --> \n"<<endl;
  print(arr);


  return 0;
}