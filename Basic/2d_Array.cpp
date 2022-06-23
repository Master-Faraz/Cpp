#include <iostream>    

using namespace std;

int main()
{
    int marks[2][3];                    

    for(int i=0 ; i<2 ;i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            cout<<"Enter value of 2d array of "<<i<<" "<<j<<" is : "<<endl;   
            cin>>marks[i][j];
        }
    }
    
    for(int i=0 ; i<2 ;i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            cout<<"Value of 2d array of "<<i<<j<<" is " <<marks[i][j]<<endl;   
            
        }
    }
    
}
