#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s1("Hello") , s2="Hello world" ;



//  							****  Operations on Strings  ****

s1.empty();         					// This will check string is empty or not
s1.append(" World");					// This will add string on last of s1
s1 += " new ";							// Adding on last
s1.length(); 							// Give length of string
s1.clear(); 							// Clear string
cout<<s1.compare(s2);                          //Gives 0 when true else any integer
cout<<s1[0]<<endl;                               // Here it will print index value







//                    ****  Finding Substrings  ****

s1="I am Faraz Ali Ahmad ";
int i=s1.find("am");
cout<<i;

//                    ****  Removing word from string  ****

string word="am";                                       // Word Which we want to remove
int length=word.length();                               // Taking length of word
s1.erase(i,length);                                     // remove from index to length of word
cout<<s1;

//                    ****  Iterate over word  ****

for(int j=0;j<s1.length();j++)
  cout<<s1[j]<<endl;

//                    ****  Iterator  ****

for(auto x=s1.begin();x!=s1.end();x++)
  cout<<(*x)<<endl;

//                    ****  For Each Loop  ****

for(auto x:s1)
  cout<<x<<",";

  return 0;
}