#include<iostream>
using namespace std;

class Num
{
  private:
  int a=0,b=1;

  public:
  static int s;

  void fun1()
  {
    cout<<a<<" "<<b<<" "<<s<<endl;
    a++;
    b++;
    s++;
  }

  static void fun2()                     // Static members function can only access static members of class
  {
    cout<<"Static count is "<<s<<endl;
  }
};

int Num::s=1;                       // Declaring static members outside the class  ****  Important  ****

int main()
{
  Num a,b;

  a.fun1();
  b.fun1();

  a.fun2();
  b.fun2();
  
  return 0;
}