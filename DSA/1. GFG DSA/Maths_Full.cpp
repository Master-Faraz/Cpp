#include <iostream>
#include <cmath>
using namespace std;

void quad(int a, int b, int c)
{
    int D;

    D = (b * b) - 4 * a * c;

    if (D < 0)
        cout << "Imaginary Roots" << endl;

    else
    {
        if (D == 0)
        {
            cout << "Equal Roots" << endl;
            cout << (((-b) + sqrt(D)) / 2 * a) << endl;
        }
        else
        {
            cout << "Two distinct roots " << endl;
            cout << (((-b) + sqrt(D)) / 2 * a) << endl;
            cout << (((-b) - sqrt(D)) / 2 * a) << endl;
        }
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    quad(a, b, c);
    return 0;
}