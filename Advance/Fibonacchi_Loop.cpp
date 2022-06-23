#include<iostream>
using namespace std;

void fibo(int n);

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Fibonacchi series is \n";
  fibo(n);
  return 0;
}

void fibo(int n)
{
    int a=0;
    int b=1;
    int c=0;

    if (n==0)
    {
        cout<<a<<"\t"<<endl;
    }
    else if (n==1)
    {
        cout<<b<<"\t";
    }
    else
    {
        cout<<a<<"\t";
        cout<<b<<"\t";
        for (int  i = 2; i<n ; i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }        
    }   
}