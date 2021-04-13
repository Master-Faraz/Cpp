#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int t;
  float n;
  cin>>t;
  while (t--)
  {
    cin >> n;
    cout << remainder(n, 5) << endl;
  }
}