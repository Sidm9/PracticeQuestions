#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1234567899;
    long n = x;
    long rem = 0;
    long res = 0;

    while (n >= 1)
    {
        rem = n % 10;
        res = res * 10;
        res += rem;
        n = n / 10;
    }

    if (res == x)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}
