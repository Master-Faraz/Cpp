#include<iostream>
using namespace std;
class Div
{
  private:
  int a,b;

  public:
  Div(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void division()
  {
    try
    {
      if(b==0)
        throw 101;
      else
        cout<<"Division is "<<a/b<<endl;
    }
    catch(int e)
    {
      cout<<"Zero division Error "<<"Error code "<<e<<endl; 
    }    
  }
};
int main()
{
  Div a(1,5);
  a.division();
  return 0;
}