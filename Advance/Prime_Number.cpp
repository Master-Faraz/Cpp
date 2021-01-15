#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    int sq;
    bool k=false;
    sq=sqrt(n);

    for(int i=2;i<=sq;i++)
    {
        if(n%i==0)
            return k=false;
        else
            return k=true;        
    }
    return k;
}

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  if(prime(n)==false)
    cout<<n<<" is not Prime "<<endl;
  else
    cout<<n<<" is Prime "<<endl;
  return 0;
}