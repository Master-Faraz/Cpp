#include<iostream>
using namespace std;

int main()
{
  int n,a,b;
  cout<<"Enter size of array"<<endl;
  cin>>n;

  int *p=new int[n];                  // Creating HEAP pointer 
  int *q=new int[n+1];

  for(int i=0;i<5;i++)                // Assigning value of P
  {
    p[i]=(i+1)*5;
  }

  cout<<"Enter number you want to insert : ";
  cin>>a;
  cout<<"Enter at which position you want to insert : ";
  cin>>b;

  for(int i=0;i<n+1;i++)                // Assigning value of P to q
  {
    if(i<b)
      q[i]=p[i];
    else if(i==b)
      q[i]=a;
    else if (i>b)
    {
      q[i]=p[i-1];
    }    
  }

  delete []p;                     // Releasing value of P
  p=q;                            // Making P as allias of Q
  q=NULL;                         // So that Q cannot point 

  cout<<"Inserted array is : \n"<<endl;
  for(int i=0;i<n+1;i++)                // Printing value of q
  {
    cout<<p[i]<<endl;
  }  

  return 0;
}