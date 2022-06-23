#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5);                // Initializing
    vector<int> A = {1, 2, 3, 4, 5}; // Initializing
    v = {1, 2, 3, 4, 5};

    A.push_back(50);

    //     *****  Iterating  *****

    for (auto x : A)
        cout << x << endl;

    vector<int>::iterator itr; //    Iterator which is just like pointer

    for (itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << endl; // Pointer type so we use * dereference

    //               *****   Vector RBR   *****

    vector<int> v1(2, 5); //                    It creates vector of size 2 assigned with value 5
    v.assign(2, 5);       //                    Same as above
    // v.assign(it1,it2);        //                    Same as above

    vector<int> v2(v1); //                     Just like copy constructor

    vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it2 = v.end();

    vector<int> v3(it1, it2); //                It will copy from it1 to it2

    //              ******       Comparison of vector is done lexicographically      ******

    cout << (v < v2) << endl; //      True as 2>1

    //                          ******      Functions       ******

    cout << v.at(2) << endl; //      at is just like []  -->   for accessing
    cout << v[7] << endl;    //      It gives garbage value
    cout << v.at(7) << endl; //      It Throws error when out of range

    cout << v.front() << endl; //      It gives first value
    cout << v.back() << endl;  //      It gives last value

    cout << v.front() << endl; //      It gives first value
    cout << v.back() << endl;  //      It gives last value

    //    V.begin will return an iterator which will point on first element of vector
    //    V.end will return an iterator which will point element after last element

    //                  *****  rbegin()    and  rend()  *****

    vector<int>::reverse_iterator it;
    for (it = v.rend(); it != v.rbegin(); it--)
        cout << *it << endl;
    //              Here rend points on element before first element so it prints Garbage value

    //                  *****       clear() , empty() , erase()     *****

    //  v.clear -->     clears all elements from vector

    //  v.empty -->     Returns True if vector is empty

    //  v.erase -->     deletes elements from posion  or from iterators
    // v.erase(0);
    v.erase(it1, it2);

    //                  *****       Insert()        *****

    v.insert(v.end(), 2);
    v.insert(v.end(), v1.begin(), v1.end());
    v.insert(v.end() - 4, 100);

    //                  *****       Capacity() , Reserve()      *****

    vector<int> a(10);
    
    cout << a.size();             //                   Size is always <= capacity
    cout << sizeof(a) << endl;    //                  Size taken in memory
    cout << a.capacity() << endl; //                  total Capacity


    a.reserve(20);                //                  Increase Capacity
    cout << "After reserving 20 spaces capacity becomes : " << a.capacity() << endl;

    v.swap(v1);      //                   For Swapping two vectors
    v.push_back(50); //              pushing element at the end

    //                      *****       AUTO KEYWORD        *****

    //  No use of writting " vector<int>::iterator itr "  or  " vector<int>::reverse_iterator itr "



    for (auto itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;
    return 0;
}