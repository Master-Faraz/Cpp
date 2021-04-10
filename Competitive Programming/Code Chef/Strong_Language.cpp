#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 0; //         t = Number of test cases
    cin >> t;
    for (t; t != 0; t--)
    {
        int n = 0, k = 0, sum = 0, i = 0; // n = String Length
        string s;                         // k = consecutive Stars *

        cin >> n >> k;
        cin >> s;

        for (i; i < n; i++)
        {

            if (s[i] == '*') //                First it checks if * or not
            {
                sum++;
                if (sum == k) //           If number of stars we wanted == stars we found
                {
                    cout << "Yes" << endl;
                    break; //           Print and break the loop
                }
            }

            else //             If stars are not consecutive then sum =0 is assigned
            {
                sum = 0;
            }
        }

        if (i == n) //                 If we check the string and we didn't find consecutive *
        {
            cout << "No" << endl;
        }
    };

    return 0;
}