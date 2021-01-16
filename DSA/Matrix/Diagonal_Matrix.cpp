#include<iostream>
using namespace std;

class Matrix
{
    private:

    int size=1;
    int *A=new int(size);

    public:

    Matrix(int size)
    {
        this->size=size;
    }

    void set_size(int size)
    {
        this->size=size;
    }

    int get_size()
    {
        return size;
    }

    void set_array()
    {
        cout<<"Enter "<<size<<" elements "<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>A[i];
        }
    }

    void set_value(int i , int j , int k)
    {
        if(i==j)
            A[i-1]=k;
    }

    int get_value(int i , int j)
    {
        if(i==j)
            return A[i-1];
        else
            return 0;
    }

    void display()
    {
        cout<<"\nDiagonal Matrix of size "<<size<<" x "<<size<<" is \n"<<endl;
        for(int i=0;i<size;i++)
        {
            for(int j=0 ; j<size ; j++)
            {
                if(i==j)
                    cout<<" "<<A[i]<<" ";
                else
                    cout<<" 0 ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    Matrix m(5);

    m.set_array();
    m.display();

     return 0;
}


/*
    In Diagonal matrix only diagonal elements are non zero 
    So in this Program we take a Dynamic array which stores only diagonal elements
    As rest of the places is filled with zeros and it takes more space.
*/