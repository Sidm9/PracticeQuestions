#include <iostream>
#include <stdlib.h>
using namespace std;
#define SIZE 10
class stack
{

    int *arr;
    int top;
    int capacity;

public:
    stack(int size = SIZE);

    void push(int);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};

stack::stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}

void stack::push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow " << endl;
        return;
    }
    else
    {
        cout << "Insertion" << endl;
        arr[++top] = x;
    }
}
int stack::pop()
{
    if (isEmpty())
    {
        cout << "Underflow" << endl;
        return 1;
    }
    else
    {
        cout << "Pop " << arr[top] << endl;
        return arr[--top];
    }
}
int stack::peek()
{
    if (!isEmpty())
        return arr[top];
    else
        return 1;
}

int stack ::size()
{
    return top + 1;
}

bool stack::isEmpty()
{
    return top == -1;
}
bool stack::isFull()
{
    return true ? top == capacity - 1 : false;
}
int main()
{
    stack pt(1);
    pt.push(3);
    pt.push(4);
    pt.push(5);
    cout << "Top Element is " << pt.peek() << endl;
    pt.pop();
    cout << "Top Element is " << pt.peek() << endl;
    pt.push(10);
    cout << "Top Element is " << pt.peek() << endl;
    pt.pop();

    cout << "Top Element is " << pt.peek() << endl;
    cout << "Stack Size is " << pt.size() << endl;

    if (pt.isEmpty())
        cout << "Stack is Empty " << endl;
    else
    {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}