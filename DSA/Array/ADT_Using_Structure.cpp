#include<iostream>
using namespace std;

struct myarray
{
    int *A;       // Creating Pointer
    // int A[6];                           ****  Another method initializing array in STACK   ****
    int size;
};

void input(struct myarray arr)                  // Taking input in array    *** Taking Structure  ****
{
    cout<<"Enter elements of array  "<<endl;
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
}

void output(struct myarray arr)                        // Printing elements of array    *** Taking Structure  ****
{
    cout<<"Elements of array are  "<<endl;
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i];
    }
}

int main()
{
  struct myarray arr;
//   struct myarray arr{{1,2,3,4,5,6} , 6};                ****  Another method and directly Passing values to STACK array ****   Here 6 is size

  cout<<"Enter size of array you want to create"<<endl;
  cin>>arr.size;                                            // Passing size of array to structure

  int *p=new int[arr.size];               // Creating Dynamic array in HEAP
  arr.A=p;

  input(arr);                                            // Function Calling
  output(arr);                                    

  return 0;
}