#include<iostream>
using namespace std;

int max(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
        return a;
    else if(a<b && b>c && b>d)
        return b;
    else if(a<c && b<c && c>d)
        return c;
    else if(a<d && b<d && c<d)
        return d;
    else {
    return 0;
    }
}

int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<max(a,b,c,d);
  return 0;
}