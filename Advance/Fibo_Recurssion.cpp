#include<iostream>
using namespace std;

int fibo(int a);                              // Function decleration

int main()
{
  int n=5,i;
  // cout<<"Enter a number "<<endl;
  // cin>>n;
  for(i=1;i<=n;i++)
  {
  cout<<fibo(i)<<" ";
  }

  return 0;
}


int fibo(int a)                           // function defination
{
    if(a==1 || a==2)
    {
    return 1;
    }
    else
    {
    return (fibo(a-1)+fibo(a-2));        
    }
}