#include<iostream>
using namespace std;
int Binary(int A[],int length,int key)
{
  int l=A[0];
  int h=length;

  while(l<=h)
  {
    int mid =((l+h)/2);

    if(A[mid]==key &&(A[mid-1]!=key))    
      return mid;
    else if(A[mid]>key)
      h=mid-1;
    else
      l=mid+1;
  }
  return -1;
}
int main()
{
  int A[]={0,1,2,3,4,4,4,4,5,5,5,6,7,8,9,10};
  cout<<"Element found at index : "<<Binary(A,16,5)<<endl;
  return 0;
}