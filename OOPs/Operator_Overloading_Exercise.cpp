/* Task -->  
    1>  Overload " + " for rational addition
    2>  Overload " << " for display rational number
*/

#include<iostream>
using namespace std;
class Rational
{
    private:
    int p,q;

    public:
    Rational(int p=0,int q=0)                       // ****   Constructor   ****
    {
        this->p=p;
        this->q=q;
    }

    Rational operator +(Rational r)           //  " + "  overloading
    {
        Rational temp(p,q);
        temp.p=p*r.q + q*r.p;
        temp.q=q*r.q;
        return temp;
    }

    friend ostream & operator <<(ostream &out,Rational &r);     // We must use friend class to overload "<<" operator

};
int main()
{
  Rational r(4,5),s(3,2),t;
  t=r+s;
  cout<<t;
  return 0;
}

ostream & operator <<(ostream &o,Rational &r)                    // Overloading "<<" operator
{
    o<<r.p<<"/"<<r.q;
    return o;
}