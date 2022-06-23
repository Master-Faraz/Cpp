#include<iostream>
using namespace std;

bool leap(int a)
{
    bool year=false;

    if(a%400==0 || (a%100 != 0 && a%4==0))    // Century year is not divisible by 400 is not leap year. 2100
        return true;
    else
        return false;
}

int main()
{
  int x,y;
  cout<<"Enter year : ";
  cin>>x;

  y=leap(x);

  if(y==true)
    cout<<"Leap Year"<<endl;
  else
    cout<<"Not leap year"<<endl;

  return 0;
}




/*  Working of Program  
    year=2021 then 
        step 1 --> 2100 % 400 =5.25  remainder != 0             so condition is false
        step 2 --> 2100 % 100 =21    remainder ==0               so condition is false,
        so program stops here
*/