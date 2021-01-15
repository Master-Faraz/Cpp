#include<iostream>
using namespace std;
int main()
{
  int n,mod,rev=0;
  cout<<"Enter a number : ";
  cin>>n;
  while(n>0)
  {
    mod=n%10;
    rev=rev*10 + mod;                     // Here we are getting physical number
    n/=10;
}
    cout<<rev<<endl;
  return 0;
}