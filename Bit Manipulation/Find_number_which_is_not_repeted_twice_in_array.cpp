#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 2, 1}, result = 0, length;

    length = sizeof(A) / sizeof(1);       // Length of array

    for (int i = 0; i < length; i++)
    {
        result = (result ^ A[i]);
    }

    cout << result << endl;

    return 0;
}


/*        
        ****   Property of XOR ****

     1>  Same then zero             -->  5^5 = 0
     2>  XOR with zero is number    -->  5^0 = 5

*/    