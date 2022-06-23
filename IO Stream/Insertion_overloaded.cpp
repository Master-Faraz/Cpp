#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    private:
    string name;
    int roll;
    string branch;

    public:

    Student(string name,int roll,string branch)
    {
        this->name=name;
        this->roll=roll;
        this->branch=branch;
    }

    friend ofstream & operator <<(ofstream &ofs,Student &s);   // Overloading to store info directly
};

ofstream & operator <<(ofstream &ofs,Student &s)           // Defining overloaded extraction operator
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
  Student s("Faraz",191044,"CSE");

  ofstream ofs;                                     // Creating object
  ofs.open("student.txt",ios::app);                 // Creating file from object

  ofs<<s;                      // Passing all data to overloaded operator which stores it in file
  ofs.close();
  
  return 0;
}