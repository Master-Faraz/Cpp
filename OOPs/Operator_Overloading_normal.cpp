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

  Complex add(Complex x)      // Here Complex is Class
  {
    Complex temp;
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
  Complex c;
  c=a.add(b);
  c.print(c);
  return 0;
}