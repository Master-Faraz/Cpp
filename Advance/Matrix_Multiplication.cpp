#include<iostream>
using namespace std;
int main()
{
  int ar=2,ac=3,br=3,bc=2,sum=0;    //ar --> a_row  ac --> a_column  || br --> b_row   bc -->   b_column                  

  cout<<"Enter rows and column of matrix A : "<<endl;
  cin>>ar>>ac;
  cout<<"Enter rows and column of matrix B : "<<endl;
  cin>>br>>bc;

  int A[ar][ac],B[br][bc],C[ar][bc];                          // multiply gives a_row and b_colon
  
  if(ac!=br)                                                  // Checking row of A = column of B
    cout<<"Matrix multiplication can not be done "<<endl;                     
  else
  {
    cout<<"Enter "<<ar*ac<<" Elements of matrix A"<<endl;          // Taking Matrix A
    for(int i=0;i<ar;i++)
    {
      for(int j=0;j<ac;j++)
      {
        cin>>A[i][j];
      }
    }

    cout<<"Enter "<<br*bc<<" Elements of matrix B"<<endl;          // Taking Matrix B
    for(int i=0;i<br;i++)
    {
      for(int j=0;j<bc;j++)
      {
        cin>>B[i][j];
      }
    }

    for(int i=0;i<ar;i++)              // Multiplication code starts here
    {
      for(int j=0;j<bc;j++)
      {
        sum=0;                      // To add elements in row we use another loop
        for(int k=0;k<ac;k++)
        {
          sum=sum + A[i][k]*B[k][j] ;
        }
        C[i][j]=sum;
      }
    }

    cout<<"Matrix  A :"<<endl;    // Printing Matrix A
    for(int i=0;i<ar;i++)
    {
      for(int j=0;j<ac;j++)
      {
        cout<<A[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"Matrix  b :"<<endl;    // Printing Matrix B
    for(int i=0;i<br;i++)
    {
      for(int j=0;j<bc;j++)
      {
        cout<<B[i][j]<<" ";
      }
      cout<<endl;
    }

    cout<<"Product of matrix  is "<<endl;    // Printing Product
    for(int i=0;i<ar;i++)
    {
      for(int j=0;j<bc;j++)
      {
        cout<<C[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  
  return 0; 
}