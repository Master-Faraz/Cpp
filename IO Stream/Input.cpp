#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ofstream outfile("First.txt",ios::app);        // This will create First.txt file
                                                // ios::app  -->  Will append below if file already exists
  outfile<<"Faraz Ali Ahmad "<<endl;     
  outfile<<191044<<endl;
  outfile.close();                      
  
  return 0;
}