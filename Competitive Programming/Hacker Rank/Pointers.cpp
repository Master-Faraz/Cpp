#include<iostream>
using namespace std;

void fun(int *a,int*b)
{
    cout<<(*a+*b)<<endl;
    if(*a>*b)
        cout<<(*a-*b)<<endl;
    else
        cout<<(*b-*a)<<endl;
}

int main()
{
  int a,b;
  cin>>a>>b;
  fun(&a,&b);

  return 0;
}