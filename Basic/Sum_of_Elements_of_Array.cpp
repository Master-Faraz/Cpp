#include<iostream>
using namespace std;
int main()
{
  int A[5]={1,2,3,4,5},sum=0;
  
  for(auto x:A)           // Using For each loop               
    sum+=x;                     
  cout<<sum;

  sum=0;

  for(int i=0;i<5;i++)     // Using for loop
    sum+=A[i];
  cout<<sum;
  return 0;
}