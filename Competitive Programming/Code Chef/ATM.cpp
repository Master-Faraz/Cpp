#include <iostream>
#include<iomanip>
using namespace std;

float fun(int x, float y)
{

    if ((y >= (x+0.5)) && ((0 <= x) && (x <= 2000)) && ((0 <= y) && (y <= 2000)))
    {
        if (x%5== 0)     
        {
            y = y - x - 0.5;
            return y;
        }
        else
        {
            return y;
        }
    }
    else
    {
        return y;
    }
}

int main()
{
    int x;
    float  y;
    cin >> x >> y;
    cout <<fixed<<setprecision(2)<< fun(x, y) << endl;

    return 0;
}