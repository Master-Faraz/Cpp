#include <iostream>
#include <deque>
// Insertion and deletion from both end

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(100);
    d.push_front(1);
    d.push_back(200);
    d.push_front(2);
    d.push_back(300);
    d.push_front(3);
    for (auto i : d)
        cout << i << endl;

    d.pop_front();
    d.pop_back();
    cout << "After popping " << endl;
    for (auto i : d)
        cout << i << endl;

    cout << "First index element : " << d.at(1) << endl;
    cout << "zero index element : " << d.at(0) << endl;

    cout << "First element : " << d.front() << endl;
    cout << "last element : " << d.back() << endl;

    cout << "Empty or not : " << d.empty() << endl; // Checking if empty or not

    // Print using iterator :->
    deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Before Erase function size : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); //.              Deleting first element
    cout << "After Erase function size : " << d.size() << endl;

    cout << "Before Erase function size : " << d.size() << endl;
    d.erase(d.begin(), d.end()); //.              Deleting deque
    cout << "After Erase function size : " << d.size() << endl;

    return 0;
}