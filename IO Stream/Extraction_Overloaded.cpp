#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    string branch;

    Student(string name,int roll,string branch)
    {
        this->name=name;
        this->roll=roll;
        this->branch=branch;
    }

    friend ifstream &operator >>(ifstream &ifs,Student &s);             // Extraction overloaded
    friend ofstream & operator <<(ofstream &ofs,Student &s);
};

ifstream &operator >>(ifstream &ifs,Student &s)                         // Extraction overloaded
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
};

ofstream & operator <<(ofstream &ofs,Student &s)           
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
  Student s("Faraz",191044,"CSE");
  ifstream ifs("First.txt");

  ifs>>s;

  cout<<"Student Name "<<s.name<<endl;
  cout<<"Student roll "<<s.roll<<endl;
  cout<<"Student Name "<<s.branch<<endl;
  

  return 0;
}