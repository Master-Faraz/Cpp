#include<iostream>
#include<string>
using namespace std;

void toggle(string &s)
{
   for(int i=0 ; i< s.length() ; i++)
   {
      if(s[i]>=65 && s[i]<=90)
         s[i]=tolower(s[i]);
      else if(s[i]>='a' && s[i]<='z')
         s[i]=toupper(s[i]);
   }
}

int main()
{
   string s;
   cout<<"Enter a string ";
   getline(cin,s);                 // Takes input in spaces

   toggle(s);

   cout<<"After converting : "<<s<<endl;

   return 0;
}

// In this program we convert lower --> Upper  and Upper --> Lower
