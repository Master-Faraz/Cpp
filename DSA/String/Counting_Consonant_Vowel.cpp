#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int vowel=0,consonant=0,space=1;
    cout<<"Enter a string : ";
    getline(cin,s);
    s;

    for(int i=0;i<s[i]!='\0';i++)
    {


            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')   // Small 
            {
                vowel++;    
            }
            else if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')   // Small 
            {
                vowel++;    
            }
            else if(s[i]==' ')
            {
                space++;
            }
            else 
            {
                consonant++;     
            }               
  
    }
    
    cout<<"Total vowels are : "<<vowel<<endl;
    cout<<"Total consonants are : "<<consonant<<endl;
    cout<<"Total words are : "<<space<<endl;
    
    return 0;
}