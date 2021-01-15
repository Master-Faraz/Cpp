#include<iostream>
using namespace std;

class Rectangle
{
  private:

  int length;
  int bredth;

  public:

  void setlength(int a)                 // Setting length function
  {
    if(a>0)
      length=a;
    else
      length=0;
  }

  void setbredth(int a)                 // Setting bredth function
  {
    if(a>0)
      bredth=a;
    else
      bredth=0;
  }

  int getlength()                   // Getting length
  {
      return length;
  }

  int getbredth()                   // Getting Bredth
  {
      return bredth;
  }

//                   Get Functions are called Accessor and Set functions are called Mutators
//                      Set and Get are called PROPERTY FUNCTIONS as they deal with property

  int area()
  {
    return length*bredth;
  }

  int perimeter()
  {
    return 2*(length+bredth);
  }

//                                    ******  Constructors  ******

Rectangle ()                                                           // Non - Parameterized constructor
{
  length =0;
  bredth =0;
}

Rectangle(int l ,int b)                                               // Parameterized constructor
{
  setlength(l);
  setbredth(b);
}

Rectangle(Rectangle & rect)                                           // Copy Constructor
{
  length=rect.length;
  bredth=rect.bredth;
}

};                                  

int main()
{
  Rectangle r();                                    // Non - Parameterized constructor
  Rectangle r(5,10);                                // Parameterized constructor
  Rectangle r(Rectangle &r);                        // Copy Constructor

  return 0;
}