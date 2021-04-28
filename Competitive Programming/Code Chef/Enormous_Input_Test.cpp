#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0, i = 0;

    cin >> n >> k;

    int *arr = new int[n];

    while (n--)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
            count++;
    }

    cout << count << endl;
    delete arr;

    return 0;
}