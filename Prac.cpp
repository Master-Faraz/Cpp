#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  vector<int>::iterator itr;
  for(itr=v.begin();itr<v.end();itr++)
    cout<<*itr<<endl;

    cout<<"\nWithout defining iterator \n"<<endl;
  
  for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<endl;

  return 0;
}