#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;
        if (x < arr[mid])
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 5, 6};
    int x = 4;
    int z = binarySearch(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, x);
    cout << z << endl;
    return 0;
}
