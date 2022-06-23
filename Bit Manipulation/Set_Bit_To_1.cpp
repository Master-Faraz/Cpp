#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter a number : " << endl;
    cin >> x;
    cout << "Enter which bit you want to set as 1 : " << endl;
    cin >> y;
    y = y - 1; // For accurate position

    cout << "old value of X is " << x << endl;
    x = (x | (1 << y));
    cout << "New value of X is " << x << endl;

    return 0;
}

/* 
    Bit on means value is 1


    5    = 101   
    1<<3 = 100

    5 & (1<<3) = 1    as ( 1 & 1 ) = 1
           
    

    

*/