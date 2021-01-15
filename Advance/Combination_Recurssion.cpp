#include<iostream>
using namespace std;

int nCr(int n,int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    return ( nCr(n-1,r-1) + nCr(n-1,r));    
}

int main()                                       // Main function
{
  int n,r;
  cout<<"Enter value of n : ";
  cin>>n;
  cout<<"Enter value of r : ";
  cin>>r;
  cout<<nCr(n,r);
  return 0;
}