#include <iostream>
using namespace std;
int main()
{
    int x, y , mask;
    cout << "Enter a number : " << endl;
    cin >> x;
    cout << "Enter which bit you want to clear : " << endl;
    cin >> y;
    y = y - 1; // For accurate position

    mask=(~(1<<y));

    cout << "old value of X is " << x << endl;
    x = (x & mask );
    cout << "New value of X is " << x << endl;

    return 0;
}
