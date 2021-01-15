#include<iostream>
using namespace std;

int main()
{
    char *n="hello world";
    int i=0;

    for(i ; n[i] !='\0' ; i++){}

    cout<<"Size is "<<i<<endl;


    return 0;
}