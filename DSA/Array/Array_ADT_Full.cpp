#include<iostream>
using namespace std;

struct myarray
{
    int *A;       // Creating Pointer
    int size;
};

void input(struct myarray arr);
void output(struct myarray arr);
void insert(struct myarray &arr,int a,int b);
void del(struct myarray &arr,int a);
int ls(struct myarray arr,int a);
int bs(struct myarray arr , int key);
int get(struct myarray arr,int key);
void set(struct myarray &arr,int key,int index);
int max(struct myarray arr);
int min(struct myarray arr);






int main()
{
  struct myarray arr;

  cout<<"Enter size of array you want to create"<<endl;
  cin>>arr.size;                                            // Passing size of array to structure

  int *p=new int[arr.size];               // Creating Dynamic array in HEAP
  arr.A=p;

  input(arr);                                            // Function Calling
 
  cout<<"maximum is "<<min(arr)<<endl;
  return 0;
}









//                                  *****    INPUT FUNCTION


void input(struct myarray arr)                          // Taking input in array 
{
    cout<<"Enter elements of array  "<<endl;
    for(int i=0;i<arr.size;i++)
    {
        cin>>arr.A[i];
    }
}




//                                    *****  OUTPUT FUNCTION  *****




void output(struct myarray arr)                        // Printing elements of array  
{
    cout<<"Elements of array are  "<<endl;
    for(int i=0;i<arr.size;i++)
    {
        cout<<arr.A[i]<<"\t";
    }
}




//                                   *****  INSERT FUNCTION  *****                                   




void insert(struct myarray &arr,int a,int b)       // Call by reference to modify Structure only C++
{
    arr.size=arr.size+1;                // Size of original array must be updated
    int *q=new int[arr.size+1];         //Creating large size array

    for(int i=0;i< arr.size+1 ; i++)    // Copying content to new array
    {
        if(i<b)
            q[i]=arr.A[i];
        else if(i==b)
            q[i]=a;
        else
            q[i]=arr.A[i-1];        
    }

    delete []arr.A;                  // Delete old array
    arr.A=q;                         // Now old array pointer points to new array
    q=NULL;                          // Making new array pointing nothing

}




//                                    *****  DELETE FUNCTION  *****




void del(struct myarray &arr,int a)
{
    arr.size=arr.size-1;                
    int *q=new int[arr.size-1];         //Decreasing size of array

    for(int i=0;i< arr.size+1 ; i++)    // **** increasing size to iterate through full array ****
    {
        if(i<a)
            q[i]=arr.A[i];
        else if(i==a)
            q[i]=0;
        else
            q[i-1]=arr.A[i];       
    }

    delete []arr.A;                  
    arr.A=q;                         
    q=NULL;                          

}




//                              *****  LINEAR SEARCH  *****




int ls(struct myarray arr,int key)
{
    for(int i=0 ; i<arr.size ; i++ )
    {
        if(arr.A[i]==key)
            return i;        
    }
    return -1;
}





//                              *****  Binary Search  *****


int bs(struct myarray arr , int key)
{
    int low , mid ,high;
    low=0;
    high=arr.size-1;

    while(low<=high)
    {
        mid =(low+high)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}




//                                  *****    Get    ****




int get(struct myarray arr,int key)
{
    for(int i=0 ; i<arr.size ; i++)
    {
        if(arr.A[i]==key)
            return i;
    }
    return -1;
}




//                                  *****     Set     *****

void set(struct myarray &arr,int key,int index)
{
    arr.A[index]=key;
}




//                                  *****    Max     *****




int max(struct myarray arr)
{
    int m=arr.A[0];
    for(int i=0;i<arr.size;i++)
    {
        if(arr.A[i]>m)
            m=arr.A[i];
    }
    return m;
}





//                                  *****    Min    *****




int min(struct myarray arr)
{
    int m=arr.A[0];
    for(int i=0;i<arr.size;i++)
    {
        if(arr.A[i]<m)
            m=arr.A[i];
    }
    return m;
}