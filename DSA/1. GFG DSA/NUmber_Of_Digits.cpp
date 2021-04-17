#include<iostream>
#include<cmath>
using namespace std;

int fun(int n)
{
    int count=0;
    while(n--)
    {
        n=n/10;
        count++;
        
    }
    return count;
}

int fun_Recurssive(int n)
{
    int count=0;
    if(n==0)
        return 0;
    else
    {
        return 1+fun_Recurssive(n/10);
    }
    
}

int main()
{
  cout<<fun(125)<<endl;
  cout<<fun_Recurssive(125)<<endl;
  cout<<floor(log10(125)+1)<<endl;
  return 0;
}