#include<iostream>
using namespace std;

int sum(int n);

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Sum is : "<<sum(n)<<endl;
  return 0;

}

int sum(int n)
{
  if(n>0)
  {
    return sum(n-1)+n;
  }

return 0;

}