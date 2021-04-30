#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        int ones = 0, zeros = 0, f = 0;
        cin >> n >> s;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zeros++;
            }
            else
            {
                ones++;
            
            }
            if(ones>=zeros)
            {
                f=1;
                break;
            }
            
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }

    return 0;
}