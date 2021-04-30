#include <iostream>
#include <string>
using namespace std;

int fun(string s)
{
    char a[] = {'E', 'Q', 'U', 'I', 'N', 'O', 'X'};
    for (auto x : a)
    {
        if (s[0] == x)
            return 0;
    }
    return 1;
}

int main()
{
    int t, a, b, n, sh = 0, an = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        while (n--)
        {
            string s;
            cin >> s;
            if (fun(s) == 0)
                sh += a;
            else
                an += b;
        }
        if(sh>an)
            cout<<"SARTHAK"<<endl;
        else if(sh==an)
            cout<<"DRAW"<<endl;
        else
            cout<<"ANURADHA"<<endl;
    }
    return 0;
}