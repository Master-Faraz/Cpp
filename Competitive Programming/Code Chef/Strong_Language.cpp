#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t = 0; //         t = Number of test cases
    cin >> t;
    for (t; t != 0; t--)
    {
        int n = 0, k = 0, sum = 0; // n = String Length
        string s;                  // k = consecutive Stars *
        cin >> n >> k;
        cin >> s;
        int i = 0;
        for (i; i < n; i++)
        {
            if (s[i] == '*')
            {
                sum++;
                if (sum == k)
                {
                    cout << "Yes" << endl;
                    break;
                }
            }
            else
            {
                sum=0;
            }
            
        }
        if (i == n)
        {
            cout << "No" << endl;
        }
    };
    return 0;
}