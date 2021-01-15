#include<iostream>
using namespace std;

class Array
{
    
    public:
    int size;
    int *A;

    Array(int size=0)             // Constructor
    {
        this->size=size;
        A =new int[size];
    }

    // ~Array()                     // Destructor
    // {
    //     delete []A;
    // }

    void Display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<A[i]<<endl;
        }
    }

    void initialize()
    {
        for(int i=0;i<size;i++)
        {
            cin>>A[i];
        }
    }

    void insert(int index,int key)
    {
        int s=size +1;            
        int *B=new int[s];           // Creating new array of increased Size

        for(int i=0 ; i<s ; i++ )         // Copying content to new array and inserting 
        {
            if(i<index)
                B[i]=A[i];

            else if(i==index)
                B[i]=key;

            else
                B[i]=A[i-1];
        }

        delete []A;
        A=B;
        B=NULL;
    }

    void del(int a)
    {
        size=size-1;                
        int *q=new int[size-1];         //Decreasing size of array

        for(int i=0;i<size+1 ; i++)    // **** increasing size to iterate through full array ****
        {
            if(i<a)
                q[i]=A[i];
            else if(i==a)
                q[i]=0;
            else
                q[i-1]=A[i];       
        }

        delete []A;                  
        A=q;                         
        q=NULL;
    }

    int linearSearch(int key)
    {
        for(int i=0 ; i<size ; i++ )
        {
            if(A[i]==key)
                return i;        
        }
        return -1;
    }

    int binarySearch(int key)         // Binary search Time complexity -> O(log n )
    {
        int low , mid ,high;
        low=0;
        high=size-1;

        while(low<=high)
        {
            mid =(low+high)/2;
            if(key==A[mid])
                return mid;
            else if(key<A[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }

    int get(int key)
    {
        for(int i=0 ; i<size ; i++)
        {
            if(A[i]==key)
                return i;
        }
        return -1;
    }
    
    void set(int key,int index)
    {
        A[index]=key;
    }

    int max()
    {
        int m=A[0];
        for(int i=0;i<size;i++)
        {
            if(A[i]>m)
                m=A[i];
        }
        return m;
    }

    int min()
    {
        int m=A[0];
        for(int i=0;i<size;i++)
        {
            if(A[i]<m)
                m=A[i];
        }
        return m;
    }

    void SetSize(int a)
    {
        size=a;
    }

    Array * merge_sorted(class Array arr)
    {
        int s=size+arr.size;
        Array *p=new Array[s];
        int i,j,k;
        i=j=k=0;

        while(i<size && j<arr.size)
        {
            if(A[i] < arr.A[j])
            {
                p->A[k++]=A[i++];          // Pointer so used " -> "
                // k++;
                // i++;
            }
            else if(A[i]==arr.A[j])
            {
                p->A[k++]=A[i++];
                // k++;
                // i++;
                j++;
            }
            else
            {
                p->A[k++]=arr.A[j++];
                // k++;
                // j++;
            }
        }
        while(i<size)
        {
            p->A[k++]=A[i++];
        }
        while(j<arr.size)
        {
            p->A[k++]=A[j++];
        }

        return p;
    }

    int getsize()
    {
        return size;
    }

    void missing_in_sorted_array()
    {
        int diff=A[0] ;
        for(int i=0;i<size;i++)
        {
            if(A[i]-i != diff )
            {
                while(diff<A[i]-i)         // For continuous missing
                {
                    cout<<"Missing element at index "<<i<<" is "<<diff+i<<endl;
                    diff++;
                }
            }
        }    
    }

};

int main()
{
    Array a(5);

    cout<<"Enter 5 elements of array : "<<endl;
    a.initialize();
    a.missing_in_sorted_array();

    return 0;
}