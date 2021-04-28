#include <iostream>
#include <set>
using namespace std;

int fun(int arr[], int n)
{

    int i;
    set<int> s;

    for (i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int *A = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int res = 0, l;
        res = n - x;
        l = fun(A, n);

        if (res <= l)
            cout << res << endl;
        else
            cout << l << endl;
    }
    return 0;
}