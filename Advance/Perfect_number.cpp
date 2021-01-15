/* Perfect numbers are those numbers whose sum of factors is double the number.
        example -->   6 -> 1 + 2 + 3 + 6 (factors)
        sum of factors = 12 which is double of 6. so 6 is perfect number
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<" Enter a number ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           sum+=i;
        }
    }
    if(n*2==sum)
        cout<<n<<" is perfect number "<<endl;
    else
        cout<<n<<" is not perfect number "<<endl;

    return 0;
}