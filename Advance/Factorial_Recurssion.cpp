#include<iostream>
using namespace std;
int fact(int a);
int main()
{
  int n;
  cout<<"Enter a number "<<endl;
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
  return 0;
}
int fact(int a)
{
    if(a<=1)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
    

}