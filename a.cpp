#include <iostream>
using namespace std;

int recu(int data)
{
    if (data == 0)
        return 1;
    else
        return (data * recu(data - 1));
}
int main()
{

    int x = recu(5);
    cout << x << endl;
}
