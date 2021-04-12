#include <iostream>
using namespace std;
int main()
{
    float n = 0;
    cin >> n;
    for (n; n != 0; n--)
    {
        float k1 = 0, k2 = 0, k3 = 0, v = 0, x = 0;
        cin >> k1 >> k2 >> k3 >> v;

        x = (100.00 / (k1 * k2 * k3 * v));

        if (x < 9.575)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

/*
    In tet case 2 at 1 1 1 10.44  --> value is 9.578 -->9.58 --> world record is not broken
    So we use 9.575 as increasing value after this round offs to 9.58 so 
    the chef must score less than 9.575 to create world record

    INPUT -->
        Number of caes you want to test
        value of variables and velocity

 */
