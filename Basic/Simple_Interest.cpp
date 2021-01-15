#include<iostream>
using namespace std;
int main()
{
  float si,p,n,r;
  cout<<"Enter Principal : ";
  cin>>p;
  cout<<"Enter number of years : ";
  cin>>n;
  cout<<"Enter rate : ";
  cin>>r;

  si=(float)(p*n*r)/100;                    // Si = ( principal * Rate * number of years ) / 100
  cout<<"Simple Interest is "<<si<<endl;

  return 0;
}