#include <iostream>                  
using namespace std;

class Employee         // Initializing class
{
    public:                // Public can be used outside of class
    string name;           // Type of variable salary is string
    int salary;
};                        // Semi-colon is must

int main()
{
   Employee faraz;              // Creating object name faraz
    faraz.name = "faraz";
    faraz.salary = 1000;
    cout<<"Name of employee is "<<faraz.name<<" and salary is "<<faraz.salary;
}
