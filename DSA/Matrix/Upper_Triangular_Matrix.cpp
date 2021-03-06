#include<iostream>
using namespace std;

class Matrix
{
    private:

    int size=1;
    int n;
    int *A;

    public:

    Matrix(int size)
    {
        this->size=size;
        n=(size*(size+1))/2;
        A=new int(n-1);

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
        cout<<"Enter "<<n<<" elements "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
    }

    void set_value(int i , int j , int k)
    {
        if(i<=j)
            A[(i-1)*(size-1) -((i-2)*(i-1))/2 + (j-1)]=k;
    }

    int get_value(int i , int j)
    {
        if(i<=j)
            return A[(i-1)*(size-1) -((i-2)*(i-1))/2 + (j-1)];
        else
            return 0;
    }

    void display()
    {
        cout<<"\nUpper Triangular Matrix of size "<<size<<" x "<<size<<" is \n"<<endl;
        for(int i=1;i<=size;i++)
        {
            for(int j=1 ; j<=size ; j++)
            {
                if(i<=j)
                    cout<<" "<<A[(i-1)*(size-1) -((i-2)*(i-1))/2 + (j-1)]<<" ";
                else
                    cout<<" 0 ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
    }

    ~Matrix()
    {
        delete [] A;
        A=NULL;
    }

};

int main()
{
    Matrix m(3);

    m.set_array();
    m.display();

     return 0;
}


/*
    For Lower triangular column Major matrix -->

    Size of array created =  (order*(order+1))/2  -1

    for setting values of real index of matrix  -->  A[i*(i-1)/2 + (j-1)]
*/