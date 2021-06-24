#include<iostream>
using namespace std;

int sum(int n)
{
  if(n==0)
    return 1;
  else
    return (n+sum(n-1));
}

int power(int a,int b)
{
  if(b==1)
    return a;
  else
    return (a*(power(a,b-1)));
}

int main()
{
  int n=10;
  // cout<<sum(n)<<endl;
  cout<<power(2,0)<<endl;
  return 0;
}