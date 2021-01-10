#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int convert(string s)
{
    int length = s.length();
    int i = 0;
    int count = 0;
    while (i < length)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                count += 4;
                i += 1;
            }
            else if (s[i + 1] == 'X')
            {
                count += 9;
                i += 1;
            }
            else
                count += 1;
        }
        else if (s[i] == 'V')
        {
            count += 5;
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L')
            {
                count += 40;
                i += 1;
            }
            else if (s[i + 1] == 'C')
            {
                count += 90;
                i += 1;
            }
            else
                count += 10;
        }
        else if (s[i] == 'L')
        {
            count += 50;
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D')
            {
                count += 400;
                i += 1;
            }
            else if (s[i + 1] == 'M')
            {
                count += 900;
                i += 1;
            }
            else
                count += 100;
        }
        else if (s[i] == 'D')
        {
            count += 500;
        }
        else if (s[i] == 'M')
        {
            count += 1000;
        }
        i += 1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string st = "III";
    int x = convert(st);
    cout << x << endl;
    return 0;
}
