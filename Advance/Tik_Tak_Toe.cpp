#include <iostream>
using namespace std;

int main()
{
    char a[3][3];
    int x;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    if(( a[0][1] == a[0][2] == a[0][3] ) || ( a[1][1] == a[1][2] == a[1][3] ) || ( a[2][1] == a[2][2] == a[2][3] ))
        cout<<"Winner  "<<endl;

    else if(( a[0][1] == a[1][1] == a[2][1] ) || ( a[0][2] == a[1][2] == a[2][2] ) || ( a[0][3] == a[1][3] == a[2][3] ))
        cout<<"Winner"<<endl;

    else if(( a[0][1] == a[1][2] == a[2][3] ) || ( a[0][3] == a[1][2] == a[2][1] ))
        cout<<"Winner"<<endl;

    else
        cout<<"Looser"<<endl;

    return 0;
}

// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<a[i][j]<<"\t";
//     }
//     cout<<endl;
// }