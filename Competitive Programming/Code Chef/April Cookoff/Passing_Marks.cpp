#include <iostream>
using namespace std;

int main()
{
    int t, Am, Bm, Cm, A, B, C, Tm;
    cin >> t;
    while (t--)
    {
        cin >> Am >> Bm >> Cm >> Tm >> A >> B >> C;
        if ((A >= Am) && (B >= Bm) && (C >= Cm) && ((A + B + C) >= Tm))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}