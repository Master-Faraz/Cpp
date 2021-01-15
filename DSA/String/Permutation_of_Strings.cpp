#include<iostream>
#include<string>
using namespace std;

void permutation(string s,int low ,int high)
{
    int i;
    if(low==high)                        // End of tree
        cout<<s<<endl;
    else
    {
        for(i=low ; i<=high ; i++)
        {
            swap(s[low],s[i]);         // Initial swapping

            permutation(s,low+1,high);       // Recurssion

            swap(s[low],s[i]);              // Backtracking
        }
    }
    
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    permutation(s,0,s.length()-1);
     return 0;
}