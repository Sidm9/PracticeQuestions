#include <iostream>
using namespace std;
#define SIZE 10
class Queue
{
public:
    int *arr;
    int capacity;
    int front;
    int back;

public:
    Queue(int size = SIZE);
    ~Queue();

    void addQueue(int x);
    void deleteQueue();
    int isFull();
    int isEmpty();
    void display();
    Queue *head;
};

Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = -1;
    back = -1;
}

Queue::~Queue()
{
    delete[] arr;
}

int Queue::isFull()
{
    return back == capacity - 1 ? EXIT_FAILURE : EXIT_SUCCESS;
}

int Queue::isEmpty()
{
    return back == -1 ? EXIT_FAILURE : EXIT_SUCCESS;
}

void Queue::addQueue(int x)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Insertion " << endl;
        arr[++back] = x;
    }
}
void Queue::deleteQueue()
{
    if (isEmpty())
    {
        cout << "Queue UnderFlow" << endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "Deletion" << endl;
        ++front;
    }
}
void Queue::display()
{
    for (int i = front; i <= back; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    Queue a;
    a.addQueue(1);
    a.addQueue(2);
    a.addQueue(3);
    a.deleteQueue();
    a.addQueue(4);
    a.display();
    return 0;
}
