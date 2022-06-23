#include<iostream>
#include<string>
using namespace std;

class Student
{
  private:

  int roll;
  string name;
  int m1,m2,m3;

  public:

  Student(int roll,string name,int m1,int m2,int m3);    // Constructor Setting details 
  int total_marks(int m1,int m2,int m3);
  char grade(int m1,int m2,int m3);
  
};

int main()
{
  int roll,m1,m2,m3;
  string name;
  cout<<"Enter roll of student : ";
  cin>>roll;
  cout<<"Enter name of student : ";
  cin>>name;
  cout<<"Enter marks of three subjects : ";
  cin>>m1>>m2>>m3;

  Student S(roll,name,m1,m2,m3);
  cout<<"Total marks obtained "<<S.total_marks(m1,m2,m3)<<endl;
  cout<<"Grade obtained "<<S.grade(m1,m2,m3)<<endl;

  return 0;
}

Student::Student(int roll,string name,int m1,int m2,int m3)  // Not inline function
  {                                                          // Constructor
    this ->name=name;                    // Using this pointer
    this ->roll=roll;
    this ->m1=m1;
    this ->m2=m2;
    this ->m3=m3;
  }

int Student::total_marks(int m1,int m2,int m3)     // Function taking parameter
{
 return(m1+m2+m3) ;
}

char Student::grade(int m1,int m2,int m3)
{
  float gra=(float)(m1+m2+m3)/3;
  if(gra<40)
    return('C');
  else if(gra>=40 && gra <=60)
    return('B');
  else
    return('A');
}
