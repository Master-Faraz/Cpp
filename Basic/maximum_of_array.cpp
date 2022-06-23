#include<iostream>
using namespace std;
int main()
{
  int A[10]={1,2,33,4,5,9,2,8,4,1},max=A[0];
  
  for(int i=1;i<10;i++)
  {
    if(max<A[i])
      max=A[i];
  }
  cout<<"Maximum of array is : "<<max<<endl;

  return 0;
}