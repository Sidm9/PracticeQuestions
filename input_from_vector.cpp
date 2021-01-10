#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int input;

    while (input != 0)
    {
        cin >> (input);
        arr.push_back(input);
    }

    cout << "VECTOR U ENTERED IS : " << endl;
    for (auto i : arr)
    {
        cout << i << endl;
    }
    cout << arr[1] << endl;

    return 0;
}
