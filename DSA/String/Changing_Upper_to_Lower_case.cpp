#include<iostream>
#include<string>
using namespace std;

void change_Upper(string &s)
{
   for(int i=0 ; i< s.length() ; i++)
      s[i]=toupper(s[i]);               //To upper changes lower to upper
}

void change_Lower(string &s)
{
   for(int i=0 ; i< s.length() ; i++)   //To Lower changes upper to lower
      s[i]=tolower(s[i]);               
}

int main()
{
   string s;
   cout<<"Enter a string ";
   getline(cin,s);                 // Takes input in spaces

   change_Lower(s);

   cout<<"After converting : "<<s<<endl;


   return 0;
}