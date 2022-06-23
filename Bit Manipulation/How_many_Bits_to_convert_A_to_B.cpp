#include <iostream>
using namespace std;
int main()
{
    int x, y, count = 0, n;
    cout << "Enter first number : " << endl;
    cin >> x;
    cout << "Enter second number : " << endl;
    cin >> y;

    // First finding different bits so we use XOR

    n = (x ^ y);

    //  Finding how many bits are non zeros

    while (n)
    {
        n = (n & (n - 1));
        count++;
    }

    cout<<"total  "<<count<<" bits needed to convert "<<x<<" to "<<y<<endl;

    return 0;
}
