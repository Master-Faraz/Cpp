// If sum of cube of digits of a number = number
//  153 = 1 + 125 + 27 (cube of digits)  == 153

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,mod,total=0,m;  
  cout<<"Enter a number : ";
  cin>>n;
  m=n;
  while(n>0)
  {
    mod=n%10;
    total+=pow(mod,3);
    n/=10;
}
    if(n==total)
        cout<<m<<" is Amstrong number"<<endl;
    else
        cout<<m<<" is Amstrong number"<<endl;
  return 0;
}