#include <iostream>
using namespace std;

struct queue
{
    int size, front, rear;
    int *arr;
};

void create(struct queue &q)
{
    q.front = q.rear = 0;
    cout << "Enter size of queue you want to create" << endl;
    cin >> q.size;
    q.size=q.size+1;

    q.arr = new int[q.size];
}

void display(struct queue q)
{
    cout << "\n";
    int i = q.front + 1;
    do
    {
        cout << q.arr[i] << endl;
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
}

void enqueue(struct queue &q, int key) //            inserting
{
    if ((q.rear + 1) % q.size == q.front) //                Checking if queue is full or not
    {
        cout << "Queue Overflow  -_- " << endl;
    }

    else
    {
        q.rear = (q.rear + 1) % q.size;
        q.arr[q.rear] = key;
    }
}

int dequeue(struct queue &q) //                       Deleting
{
    int x = 0;
    if (q.rear == q.front) //                Checking if queue is full or not
    {
        cout << "Queue Underflow  ^_^ " << endl;
    }
    else
    {
        q.front = (q.front + 1) % q.size;
        x = q.arr[q.front];
    }
    return x;
}

int main()
{
    queue q;
    create(q);
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);

    cout<<"Deleted value is "<<dequeue(q)<<endl;
    display(q);
    return 0;
}