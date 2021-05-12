#include <iostream>
using namespace std;

void check(int n, int i)
{
    int x = 1;
    // x = (x << (i-1));
    if ((n & (x << (i - 1)) == 1))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int main()
{
    //   int x=5;
    //   cout<<(~x)<<endl; //.                 Complement means (-x -1)

    //.                 Checking if ith bit is set or not

    check(5, 1);
    check(5, 2);
    check(5, 3);
}