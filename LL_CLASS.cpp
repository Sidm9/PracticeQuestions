#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

public:
    void traverse(Node *n)
    {
        while (n != NULL)
        {
            cout << " " << n->data << " " << endl;
            n = n->next;
        }
    }

    void traverseAndSave(Node *n)
    {
        Node *ptr = n->next;
        unordered_map<Node *, int> map = {};

        while (n != NULL)
        {
            // cout << " " << n->data << " " << endl;

            map[n] = n->data;

            n = n->next;
        }

        for (auto i : map)
        {
            cout << i.first << "   " << i.second << endl;
        }

        auto temp = map.find(ptr);

        if(temp == map.end())
            cout << "Not found" << endl;
        else
            cout << temp->first << " is " << temp->second << endl;
    }
};
int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    Node Object;
    // Object.traverse(head);

    Object.traverseAndSave(head);

    return 0;
}