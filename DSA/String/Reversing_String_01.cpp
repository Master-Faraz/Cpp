#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int main()
{
  char A[]="Faraz";
  char B[strlen(A)];

  for(int i=0 , j=strlen(A) -1  ;  i<strlen(A)  ;  i++,j--)
  {
    B[i]=A[j];  
  }

  for(int i=0;i<strlen(A);i++)
  {
    cout<<B[i]<<endl;
  }
  return 0;
}