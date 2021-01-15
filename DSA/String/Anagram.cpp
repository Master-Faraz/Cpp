#include <bits/stdc++.h>

using namespace std;

bool anagram(string a,string b)
{
    int x=a.length();
    int y=b.length();

    if(x!=y)
        return false;

    sort(a.begin(),a.end());                  // Sorting both strings
    sort(b.begin(),b.end());
    
    for(int i=0;i<x;i++)                // checking if it is same or not
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;

}

int main()
{
    string s1,s2;
    int n;

    cout<<"Enter first string : ";
    getline(cin,s1);
    cout<<"Enter second string : ";
    getline(cin,s2);

    for(int i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    
    n=anagram(s1,s2);                    // Bool returns 0 or 1

    if(n==0)
        cout<<"Not an Anagram "<<endl;
    else
        cout<<"Anagram"<<endl;
          
    return 0;
}