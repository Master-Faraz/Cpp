#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter a number : " << endl;
    cin >> x;
    cout << "Enter which bit you want to check : " << endl;
    cin >> y;

    y = y - 1; // For accurate position

    if ((x & (1 << y)) == 0)
        cout << "value of Bit is 0 " << endl;
    else
        cout << "Value of Bit is 1 " << endl;

    return 0;
}

/* 
    Bit on means value is 1


    5    = 101   
    1<<3 = 100

    5 & (1<<3) = 1    as ( 1 & 1 ) = 1
           
    

    

*/