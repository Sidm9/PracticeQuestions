#include <iostream>
using namespace std;
class MinStack
{
public:
    /** initialize your data structure here. */
    int arr[100] = {0};

    int minStack[100] = {0};

    int head;

    int min_ptr;

    MinStack()
    {

        head = -1;

        min_ptr = INT32_MAX;
    }

    void push(int val)
    {

        head = genericPush(val, arr, head, sizeof(arr) / sizeof(arr[0]));

        if (arr[min_ptr] > val)
        {
            if (min_ptr == INT32_MAX)
                min_ptr = -1;

            min_ptr = genericPush(val, minStack, min_ptr, sizeof(minStack) / sizeof(minStack[0]));
            cout << "MIN_PTR => " << min_ptr << endl;
        }
    }

    void pop()
    {
        if (minStack[min_ptr] == arr[head])
            genericPop(min_ptr);
        genericPop(head);
    }

    int top()
    {
        return arr[head];
    }

    int getMin()
    {
        return minStack[min_ptr];
    }

    int genericPush(int val, int arr[], int ptr, int size)
    {

        if (ptr == size - 1)
        {
            return -1;
        }
        else
        {
            ptr++;
            arr[ptr] = val;
            cout << "Caed" << endl;
        }

        return ptr;
    }

    void genericPop(int ptr)
    {
        ptr--;
    }
};

int main()
{

    MinStack *obj = new MinStack();

    obj->push(9);
    obj->push(2);
    obj->push(2);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();

    cout << param_3 << "TOP" << endl;
    cout << param_4 << "MINIMUM" << endl;

    return 0;
}
