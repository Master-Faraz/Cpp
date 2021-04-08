#include <iostream>
#include <iomanip>
using namespace std;
float fun(float k1, float k2, float k3, float v)
{
    float factor, time;
    factor = k1 * k2 * k3 * v;
    time = (100 / factor);
    cout << time << endl;
}

int main()
{
    //   float a=4.367;
    //   cout<<fixed<<setprecision(1)<<a<<endl;

    fun(1,1,0.9,10.44);

    return 0;
}