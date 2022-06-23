#include <iostream>                  
using namespace std;

class Employee         
{
    public:                
    string name;         
    int salary;

    void details()     // Method
    {
        cout<<"Name of employee is "<<this->name<<" and salary is "<<this->salary;       // this is hust like self in python  
    
    }
};                        

int main()
{
   Employee faraz;              
    faraz.name = "faraz";
    faraz.salary = 1000;
    faraz.details();           // Calling method
}
