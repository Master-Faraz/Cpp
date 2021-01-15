#include<iostream>
using namespace std;

int Search(int a[],int len,int key)
{
  for(int i=0;i<len;i++)
  {
    if(key==a[i])                   // constant == variable
      return i;
  }
  return 0;
}

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9},len,key;
  len=sizeof(arr)/sizeof(arr[0]);                                    // Finding size of array
  cout<<"Enter key you want to find : ";
  cin>>key;

  cout<<"Search found at index: "<<Search(arr,len,key)<<endl;

  return 0;
}