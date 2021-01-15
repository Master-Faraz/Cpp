#include <iostream>                  
using namespace std;                
int main()
{
    int n=1,a;

    while(n!=0)
    {
        cout<<"Enter a number : ";
        cin>>a;

        if(a%2==0)
            {
                cout<<"\n**** Number is even ****\n"<<endl;
            }
        else
            {
                cout<<"\n**** Number is odd ****\n"<<endl;
            }

        cout<<"To continue the program press 1"<<endl<<"To stop the program press 0"<<endl<<endl;
        cout<<"Enter Your choice :  ";
        cin>>n;
        
    }
}
