#include<iostream>
using namespace std;

int rev(int n)
{
    int r,reverse=0;                    // Remainder
    while(n!=0)
    {
        r=n%10;
        n/=10;
        reverse=reverse*10+r;
    }
    return reverse;
}

int main()
{
  int x,y;
  cout<<"Enter a number : ";
  cin>>x;
  y=rev(x);
  if(x==y)
    cout<<"Number is palindrome "<<endl;
  else
    cout<<"Number is not palindrome "<<endl;
  return 0;
}