#include<iostream>
using namespace std;

double e(int x,int n);

int main()
{
  int n,x;
  cout<<"Enter power of e you want to find ";
  cin>>x;
  cout<<"Enter how many terms of Taylor's Series you want to find (Precision) : ";
  cin>>n;
  cout<<e(x,n);
  return 0;
}

double e(int x,int n)
{
 static double p=1,f=1;
 double r;
 if (n==0)
 {
   return 1; 
 }
  else
  {
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;

  }
  
}
;