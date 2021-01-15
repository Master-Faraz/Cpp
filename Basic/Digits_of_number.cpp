#include<iostream>
using namespace std;
int main()
{
  int n,mod;
  cout<<"Enter a number : ";
  cin>>n;
  while(n>0)
  {
    mod=n%10;
    cout<<mod;
    n/=10;
}
  return 0;
}