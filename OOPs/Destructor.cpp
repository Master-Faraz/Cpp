#include<iostream>
using namespace std;

namespace Simple
{
class First                                                     
{
  public:
  First()                                     // Constructor
  {
    cout<<"Constructor is called "<<endl;
  }
  ~First()                                    // Destructor
  {
    cout<<"Destructor is called "<<endl;
  }
};

void fun(){First n; }                   // Function  inside namespace  // Destructor will be called if function is finished

}

namespace Dynamic
{
  class First                                                     
  {
    public:
      int *p;

      First()                                     // Constructor
      {
        int *p=new int[10];                                   // Dynamic memory
        cout<<"Constructor is called "<<endl;
      }
      ~First()                                    // Destructor
      {
        delete []p;
        cout<<"Destructor is called "<<endl;
      }
  };

  void fun()
  {
    First *p=new First();                        // Dynamically creating object
    delete p;                                  // For calling destructor we must delete dynamic memory 
  }

}

int main()
{
  Dynamic::fun();
  return 0;
}