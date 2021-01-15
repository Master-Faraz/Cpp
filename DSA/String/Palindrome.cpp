#include<iostream>
using namespace std;

bool palindrome(string s)
{
    int i=0,j=s.length()-1;

    while(i<j)
    {
        if(toupper(s[i])!=toupper(s[j]))
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;

}

int main()
{
  string s="naman";
  int n;
  n=palindrome(s);

  if(n==0)
    cout<<"Not a Palindrome"<<endl;
  else
    cout<<"Palindrome"<<endl;
    
  return 0;
}