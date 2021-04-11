#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void p(T x)
{
    cout << x << endl;
}

vector<int> a = {3, 2, 1};

int partition(int low, int high)
{
    int pivot = a[high];

    int i = low - 1;

    for (int j = 1; j < high; j++)
    {
        if (a[j] <= a[pivot])
        {
            swap(a[j], a[i]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

void quickSort(int low, int high)
{
    int pivot = a[high];
    if (low < high)
    {
        int pi = partition(low, high);
        partition(low, (high - 1));
        partition(low + 1, high);
    }
}

int main()
{

    quickSort(0, (a.size() - 1));
    for (auto i : a)
    {
        p(i);
    }
    return 0;
}