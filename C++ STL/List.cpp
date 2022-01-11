#include <iostream>
#include <list>
//  Implementation using doubly linked list --> pointer in front and in back

using namespace std;
int main()
{
    list<int> l;

    l.push_back(100);
    l.push_back(200);
    l.push_back(300);
    l.push_front(5);
    l.push_front(10);
    l.push_front(15);

    // for (auto i : l)
    //     cout<<i<<endl;

    // list<int>::iterator it;
    // for (it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // cout << "Front : " << l.front() << endl;
    // cout << "back : " << l.back() << endl;

    // l.pop_front();
    // l.pop_back();

    cout << "\nAfter sorting : " << endl;
    l.sort();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "\nAfter reversing : " << endl;

    l.reverse();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}