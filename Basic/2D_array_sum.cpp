#include<iostream>
using namespace std;
int main()
{
  int a[2][3]={{1,2,3},{4,5,6}};
  int b[2][3]={{1,2,3},{4,5,6}};
  int sum[2][3];                    // Creating an array

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum[i][j]=a[i][j] + b[i][j];          // Sum of 2D arrays
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;    
  }  
  return 0; 
}