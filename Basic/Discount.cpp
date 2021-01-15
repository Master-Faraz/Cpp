#include<iostream>
using namespace std;
int main()
{
  float disc,MRP,net,disc_price;
  cout<<"Enter MRP : ";
  cin>>MRP;
  cout<<"Enter discount : ";
  cin>>disc;
  disc_price=(MRP*disc)/100;
  net=MRP-disc_price;
  cout<<"Your net price is "<<net;
  return 0;
}