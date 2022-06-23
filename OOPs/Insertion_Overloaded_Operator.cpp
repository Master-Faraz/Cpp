#include<iostream>
using namespace std;

class Complex
{
  private:
  int real;
  int imag;

  public:
  Complex(int real=0,int imag=0)
  {
    this -> real=real;
    this -> imag=imag;    
  }

  friend ostream & operator <<(ostream &out , Complex &c);           // Syntax for insertion operator overloading to show complex using COUT
                                                                    //   return type is ostream and input type is Reference of ostream and complex

};

int main()
{
  Complex a(10,6);

  cout<<a;                        // Printing value in complex form 

  return 0;
}

ostream & operator <<(ostream &out , Complex &c)
{
    out<<c.real<<" + "<<c.imag<<"i";
    return out;
}