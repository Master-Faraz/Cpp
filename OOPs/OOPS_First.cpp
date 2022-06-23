#include<iostream>
using namespace std;

class Rectangle
{
  public:                          // Public so everyone can access it
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


};                                  // Semi colon is important

int main()
{
  Rectangle r1,r2;                // R1 and R2 are objects

  r1.length=5;
  r1.bredth=10;

  cout<<"Area of R1 is : "<<r1.area()<<endl;
  cout<<"Perimeter of R1 is "<<r1.perimeter()<<endl;

  cout<<"\n";

  r2.length=50;
  r2.bredth=200;

  cout<<"Area of R2 is : "<<r2.area()<<endl;
  cout<<"Perimeter of R2 is "<<r2.perimeter()<<endl;

  return 0;
}