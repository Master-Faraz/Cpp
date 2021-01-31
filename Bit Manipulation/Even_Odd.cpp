#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number : " << endl;
  cin >> a;

  if ((a & 1) == 0)                 // We must use brackets
  {
    cout << "Even" << endl;
  }
  else
  {
    cout << "Odd" << endl;
    return 0;
  }
}