#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
  int x,y;
  cout<<"Enter first number"<<endl;
  cin>>x;
  cout<<"Enter second number"<<endl;
  cin>>y;
  cout<<"Greatest common divisor of "<<x<<" and "<<y<<" is "<<"**** "<<gcd(x,y)<<" ****";
  return 0;
}
int gcd(int a,int b)
{
    if(a==b)
        return a;

    if(a%b==0)
        return b;

    if(b%a==0)
        return a;

    if(a%b==0)
        return b;
    
    if(a>b)
        return(gcd(a%b,b));
    else
        return(gcd(a,b%a));
    
}