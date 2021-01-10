#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}

class Solution
{
public:

    Solution()
    {
        struct Node *headpt = (struct Node *)malloc(sizeof(struct Node));
    }

    void insert(struct Node *head, int a)
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        if (head == nullptr)
        {
            ptr->data = a;
            ptr->next = nullptr;
            head = ptr;
            cout << "ELEMENT ADDED !" << endl;
        }
        else
        {
            ptr->data = a;
            ptr->next = head;
            head = ptr;
            cout << "ELEMENT ADDED !" << endl;
        }
    }

    void print(struct Node *head)
    {
        if (head == nullptr)
        {
            cout << "empty" << endl;
        }
        else
        {
            struct Node *ptr = head;

            while (ptr != nullptr)
            {
                cout << " [ " << ptr->data << " --> " << ptr->next << " ] ";
                ptr = ptr->next;
            }
        }
    }
};

int main(int argc, char const *argv[])
{

    Solution obj;

    obj.insert(head, 1);
    obj.insert(head, 2);
    obj.insert(head, 3);

    obj.print(head);

    obj.insert(head2, 6);
    obj.insert(head2, 7);
    obj.insert(head2, 8);

    obj.print(head2);

    return 0;
}
