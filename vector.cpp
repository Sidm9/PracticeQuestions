#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, n;
    cout << "Enter Length" << endl;
    cin >> a;
    vector<int> arr;

    for (int i = 0; i < a; i++)
    {
        cin >> n;
        arr.push_back(n);
    }

    for (int i : arr)
        cout << i << endl;

    return 0;
}
