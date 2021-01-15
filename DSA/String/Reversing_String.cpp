#include<iostream>
#include<string>
using namespace std;

void rev(string s)
{
    char c[s.length()];
    cout<<"Reverse of string is "<<endl;
    for(int i=s.length()-1;i>=0;i--)
    {
        cout<<s[i];
    }
}

int main()
{
    string s="Faraz";
    rev(s);
  
    return 0;
}