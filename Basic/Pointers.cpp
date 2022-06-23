// Pointers stores address of variable in memory
#include <iostream>                  
using namespace std;                
int main()
{
    
    int a=20,*z;               // *z will give a
    z=&a;                 // Here z is a pointer
    
    cout<<*z<<endl;
    cout<<z<<endl;
    cout<<&a<<endl;

}
