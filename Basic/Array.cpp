#include <iostream>    

using namespace std;

int main()
{
    int marks[6];                   // Initializing array              

    for(int i=0 ; i<6 ;i++)    // Taking input in array
    {
        cout<<"Enter marks of "<<i+1<<" th Student :  ";      // Here we take i+1 as indexing starts from 0 
        cin>>marks[i];
    }
    

    for(int i=0 ; i<6 ;i++)   // Printing array 
    {
        cout<<"Marks of "<<i+1<<" th Student is : "<<marks[i]<<endl;
    }
    
}
