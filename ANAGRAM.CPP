#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 121;
    int n = x;
    int rem = 0;
    int res = 0;

    while (n >= 0)
    {
        rem = n % 10;
        res = res % 10;
        cout << res << endl;
        n = n / 10;
    }

    if (rem == x)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}
