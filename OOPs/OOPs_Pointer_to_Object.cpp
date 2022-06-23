#include<iostream>
using namespace std;

class Rectangle
{
  public:                          
  int length;
  int bredth;

  int area()
  {
    return length*bredth;
  }

  int perimeter()
  {
    return 2*(length+bredth);
  }
};                                  

int main()
{
  Rectangle r1; 

  Rectangle *p;
  p=&r1;                    // Pointer is pointing to r1

  p->length=50;             // Arrow is just like " . " operator
  p->bredth=200;     

 
  cout<<"Area of R1 is : "<< p->area() <<endl;
  cout<<"Perimeter of R1 is "<< p->perimeter() <<endl;

  return 0;
}