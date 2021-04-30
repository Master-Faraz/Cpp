#include <iostream>
using namespace std;
int main()
{
    int t, trip, song, total;
    cin >> t;
    while (t--)
    {
        cin >> trip >> song;
        total = trip / song;
        if (song > trip)
            cout << 0 << endl;
        else
            cout << total << endl;
    }
    return 0;
}