#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile;                        // Object of ifstream
    infile.open("First.txt");               // object.function()

    string s;
    int x;

    infile>>s;                             // Takes first line from first.txt
    infile>>x;                             // Takes Second line from first.txt

    cout<<s<<" "<<x<<endl;
    if(infile.eof())                                // Check if the line is last or not
        cout<<"End line reached in file"<<endl;
    else
        cout<<"Not the End line "<<endl;

    infile.close();

  return 0;
}