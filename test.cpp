#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    int temp = INT8_MIN;

    while (true)
    {

        s.pop();
        while (!s.empty())
        {
            temp < s.top();
            while (!r.empty() && r.top() > temp)
            {
                temp = s.top();
                s.pop();

                r.push(s.top());
                s.pop();
            }

            while (!r.empty())
            {
                s.push(r.top());
                r.pop();
            }
            
        }
    }

    return 0;
}