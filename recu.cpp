#include <iostream>
using namespace std;

void foo(int arr[])
{
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << endl;
}
int main()
{
    int arr[] = {1, 2, 12, 4, 5};

    int *p = arr;

    foo(arr);

    return 0;
}