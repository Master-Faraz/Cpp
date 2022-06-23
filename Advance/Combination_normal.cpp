#include<iostream>
using namespace std;

int fact(int n)                                 // Defining factorial
{
    int pro=1;
    for(int i=1;i<=n;i++)
    {
        pro*=i;
    }
    return pro;
}

double nCr(int n,int r)                          // Combination formula
{
    int num,deno;
    double final;
    num=fact(n);
    deno=fact(r)*fact(n-r);
    final=(double)num/deno;
    return final;    
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

//        nCr = n! / r! * (n-r)!