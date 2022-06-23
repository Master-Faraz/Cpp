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

  Complex operator +(Complex x)      // Syntax for operator overloading
  {
    Complex temp;                       // We can add more than two classes easily
    temp.real= real + x.real;             
    temp.imag= imag + x.imag;
    return temp;
  }

  void print(Complex x)
  {
    cout<<x.real<<" + "<<x.imag<<"i"<<endl;
  }
};

int main()
{
  Complex a(10,6);
  Complex b(5,3);
  Complex c(1,1);
  Complex d;

  d=a+b+c;
  
  d.print(d);
  return 0;
}