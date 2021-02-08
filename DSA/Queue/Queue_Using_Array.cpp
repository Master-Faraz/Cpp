#include<iostream>
using namespace std;

struct queue
{
    int size,front,rear;
    int *arr;    
};

void creation(struct queue &q)
{
    q.front=q.rear=-1;
    cout<<"Enter size of queue you want to create"<<endl;
    cin>>q.size;

    q.arr=new int[q.size];

    // cout<<"\nEnter "<<q.size<<" Elements "<<endl;
    // for(int i=0;i<q.size;i++)
    // {
    //     cin>>q.arr[i];
    //     q.rear++;
    // }
}

void display(struct queue q)
{
    cout<<"\n";
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.arr[i]<<endl;
    }
}

void display_full(struct queue q)
{
    cout<<"\n";
    for(int i=0;i<q.size;i++)
    {
        cout<<q.arr[i]<<endl;
    }
}

void enqueue(struct queue &q,int key)    //            inserting
{
    if(q.rear==q.size-1)    //                Checking if queue is full or not
    {
        cout<<"Queue Overflow  -_- "<<endl;
    }

    else
    {
        q.rear++;
        q.arr[q.rear]=key;
    }    
}

void dequeue(struct queue &q)  //                       Deleting
{
    if(q.rear==q.front)    //                Checking if queue is full or not
    {
        cout<<"Queue Underflow  ^_^ "<<endl;
    }
    else
    {
        q.front++;
        q.arr[q.front]=0;        
    }    
}


int main()
{
  queue q;
  creation(q);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);

  dequeue(q);
  display(q);
  cout<<"\n\nNew display"<<endl;
  return 0;
}