#include<iostream>
using namespace std;

int sum(int a)
{
  int total=0;
  for(int i=1;i<=a;i++)
  {
    total+=i;
  }
  return total;
}

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n)<<endl;
  return 0;
}