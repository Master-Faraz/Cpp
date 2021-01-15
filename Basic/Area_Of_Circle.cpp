#include<iostream>
using namespace std;
int main()
{
  float pi=(float)22/7,area,r;       // If we don't use float it will take integer values
  cout<<"Enter radius of circle : ";
  cin>>r;
  area=pi*r*r;
  cout<<"Area of circle is : "<<area;
  return 0;
}