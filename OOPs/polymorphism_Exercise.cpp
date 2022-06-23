#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual float Area()=0;
    virtual float Perimeter()=0;
};

class Rectangle:public Shape
{
    private:
    float l,b;

    public:
    Rectangle(float l,float b)
    {
        this->l=l;
        this->b=b;
    }
    float Area(){return(2*(l+b));}
    float Perimeter(){return(l*b);}
};

class Circle:public Shape
{
    private:
    float r;

    public:
    Circle(float r)
    {
        this->r=r;
    }
    float Area(){return(3.14*r*r);}
    float Perimeter(){return(2*3.14*r);}
};

int main()
{
  Shape *r=new Rectangle(5,10);
    cout<<"Area of rectangle is "<<r->Area()<<endl;
    cout<<"Perimeter of rectangle is "<<r->Perimeter()<<endl;

  Shape *p=new Circle(7);
    cout<<"Area of Circle is "<<p->Area()<<endl;
    cout<<"Perimeter of Circle is "<<p->Perimeter()<<endl;

  return 0;
}