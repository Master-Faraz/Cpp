#include <iostream>
using namespace std;
int main()
{
    int Test_case;
    cin >> Test_case;
    while (Test_case--)
    {
        long long int sum = 0, int_division = 0, remainder = 0;
        long long int N;
        int x1a, x2b, x3c;
        cin >> N; //             N -->  Number of dice

        x1a = 20;
        x2b = 36;
        x3c = 51;

        if (N == 1)
            sum += x1a;
        else if (N == 2)
        {
            sum += x2b;
        }
        else if (N == 3)
        {
            sum += x3c;
        }
        else if (N == 4)
        {
            sum += 60;
        }
        else if (N > 4)
        {
            remainder = N % 4;
            int_division=(N/4);

            sum += ((60 * int_division) - 4 * (N - 4));

            if (remainder == 1)
                sum += x1a;
            else if (remainder == 2)
                sum += x2b;
            else if (remainder == 3)
                sum += x3c;
        }
        cout << sum<<endl;
    }

    return 0;
}