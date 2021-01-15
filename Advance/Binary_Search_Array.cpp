#include<iostream>
using namespace std;
int main()
{
  int A[10]={1,2,3,4,5,6,7,8,9,10},low=0,high=9,mid,n;     // low =0 and high =9 as we are getting index
  cout<<"Enter a number you want to search : ";
  cin>>n;

  while(low<=high)                             // When number is not present in loop then loop will exit
  {                                            // and code below is executed
    mid=(low+high)/2;                  // Taking mid point of array
    if(A[mid]==n)                                 // Comparing values not index
    {
      cout<<"Key is found at index : "<<mid<<endl;
      return 0;                                // Return 0 to exit the loop when condition satisfies
    }
    else if (A[mid]>n)
    {
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }    
  }
  cout<<"Key is not inside array"<<endl;        // When number is not present in array
}