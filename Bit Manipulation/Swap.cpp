#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 5, b = 10;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}