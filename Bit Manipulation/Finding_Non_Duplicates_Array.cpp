// Only works with even and odd int

#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 2, 1, 5}, result = 0, length, even = 0, odd = 0;

    length = sizeof(A) / sizeof(1); // Length of array

    for (int i = 0; i < length; i++)
    {
        result = (result ^ A[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if ((A[i] & 1) == 0)
        {
            even = (even ^ (result ^ A[i]));
        }
        else
        {
            odd = (odd ^ (result ^ A[i]));
        }
    }
    cout << even << "  " << odd << endl;

    return 0;
}

/*        
        ****   Property of XOR ****

     1>  Same then zero             -->  5^5 = 0
     2>  XOR with zero is number    -->  5^0 = 5

*/