#include <bits/stdc++.h>
using namespace std;

int fun(int arr[], int n)
{

  int i;
  set<int> s;

  for (i = 0; i < n; i++)
  {
    s.insert(arr[i]);
  }
  return s.size();

}
int main()
{
  int A[8]={1,1,1,4,5,1,7,8};
  int size=sizeof(A)/sizeof(int);

  cout<<fun(A,8)<<endl;
  cout<<size<<endl;

  return 0;
}