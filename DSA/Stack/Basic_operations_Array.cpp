#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack &st)
{
    cout << "Enter size of stack you want to create : ";
    cin >> st.size;
    st.top = -1;
    st.s = new int[st.size];
}

void display(struct stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << endl;
    }
}

void push(struct stack &st, int key)
{
    if (st.top == st.size - 1)
        cout << "Stack overflow" << endl;
    else
    {
        st.top++;
        st.s[st.top] = key; //        *******   Improtant    *******
    }
}

int pop(struct stack &st)
{
    int key;
    if (st.top < 0)
        cout << "Stack underflow" << endl;
    else
    {
        key = st.s[st.top];
        st.s[st.top] = 0;
        st.top--;
    }
    return key;
}

int peek(struct stack &st, int index)
{
    int x = -1;

    if (st.top - index + 1 < 0)
        cout << "Ïnvalid Index " << endl;
    else
        x = st.s[st.top - index + 1];

    return x;
}

void is_empty(struct stack st)
{
    if (st.top < 0)
        cout << "Stack is empty " << endl;
    else
        cout << "Stack is not empty" << endl;
}

void is_full(struct stack st)
{
    if (st.top < st.size - 1)
        cout << "Stack is not full " << endl;
    else
        cout << "Stack is full" << endl;
}

int stack_top(struct stack st)
{
    if (st.top >= 0)
        return st.s[st.top];
    else
        return -1;
}

int main()
{
    stack st;
    create(st);
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);
    cout << "\n\nPopped element is " << pop(st) << endl;
    display(st);
    return 0;
}