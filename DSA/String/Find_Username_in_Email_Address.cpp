#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s="farazali1234@gmail.com";

  int i=s.find('@');                     // Finding index of @ 
  string sub=s.substr(0,i);

  cout<<"Username is : "<<sub<<endl;

  return 0;
}