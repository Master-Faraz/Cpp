#include<iostream>
using namespace std;

class base
{
  public:                                 // Constructors of base class 

  base()
  {cout<<"This is base class "<<endl;}

  base(int x)       // Parameterized constructor
  {cout<<"This is Parameterized { "<<x<<" } base class "<<endl;}

};

class Derived:public base
{
  public:

  Derived()
  {cout<<"This is Derived class "<<endl;}

  Derived(int y)    // Parameterized constructor
  {cout<<"This is Parameterized { "<<y<<" } Derived class "<<endl;}

  //    ****  Calling Base clas constructor from Derived class constructor ****

  Derived(int x, int y):base(x)      // **** Constructor Passing ****    
  {
    cout<<"This is Derived Class Constructor with Constructor Passing "<<x<<" and "<<y<<endl;
  }

};

int main()
{
  Derived a;

  cout<<endl;

  Derived b(5);

  cout<<endl;

  Derived c(10,5);

  cout<<endl;

  return 0;
}