#include<iostream>
using namespace std;
int main()
{
  int *p=new int[5];                  // Creating HEAP pointer 
  int *q=new int[10];

  for(int i=0;i<5;i++)                // Assigning value of P
  {
    p[i]=i;
  }

  for(int i=0;i<10;i++)                // Assigning value of P to q
  {
    if(i<5)
      q[i]=p[i];
    else if(i>=5)
      q[i]=i*100;
  }

  delete []p;                     // Releasing value of P
  p=q;                            // Making P as allias of Q
  q=NULL;                         // So that Q cannot point 

  for(int i=0;i<10;i++)                // Printing value of q
  {
    cout<<p[i]<<endl;
  }             
  return 0;
}