#include <iostream>
#include <vector>
using namespace std;

int prime(int a, int b)
{
    if (a == b)
    {
        a = a / b;
    }
    return a;
}

int main(int argc, const char **argv)
{

    vector<int> g1;
    bool flag = true;
    auto a = 1;
    auto temp = 0;
    auto counter = 0;

    while (flag)
    {
        counter++;
        temp = prime(a, 2);

        temp = prime(a, 3);

        temp = prime(a, 5);

        if (temp == a)
        {
            a++;
        }
        else
        {
            if (counter == a)
            {
                cout << temp;
            }
        }
    }
    cout << a << endl;
    return 0;
}