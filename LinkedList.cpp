#include <iostream>
#include <stdlib.h>
using namespace std;
struct LinkedList
{
    int data;
    struct LinkedList *next;
} * head;

void print()
{
    if (head == nullptr)
    {
        cout << "empty" << endl;
    }
    else
    {
        struct LinkedList *temp = head;
        cout << "------DISPLAY-------" << endl;
        while (temp != nullptr)
        {
            cout << " [ " << temp->data << " --> " << temp->next << " ] ";
            temp = temp->next;
        }
        cout << endl
             << "--------------------" << endl;
    }
}
void insertFirst()
{
    struct LinkedList *ptr = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    cout << "Enter Number :" << endl;
    cin >> ptr->data;

    if (head == nullptr)
        head = ptr;
    else
    {
        ptr->next = head;
        head = ptr;
    }
    print();
}

void last()
{
    struct LinkedList *ptr = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    struct LinkedList *temp = head;
    cout << "Enter Number :" << endl;
    cin >> ptr->data;

    if (head == nullptr)
        head = ptr;
    else
    {

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = nullptr;
    }
    print();
};
void between()
{
    struct LinkedList *ptr = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    struct LinkedList *temp = head;
    int pos = 0;
    int i = 1;
    cout << "Enter Position : " << endl;
    cin >> pos;
    if (pos == 0)
        insertFirst();
    else
    {
        cout << "Enter Number :" << endl;
        cin >> ptr->data;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        ptr->next = temp->next;
        temp->next = ptr;
    }

    print();
};
void DeleteFirst()
{
    if (head == nullptr)
    {
        cout << "No Elements" << endl;
        return;
    }
    else
    {
        struct LinkedList *ptr = head;
        head = head->next;
        free(ptr);
    }
    print();
}

void DeleteLast()
{
    if (head == nullptr)
    {
        cout << "No Elements" << endl;
        return;
    }
    else
    {
        struct LinkedList *ptr = head->next;
        ;
        struct LinkedList *ptr2 = head;
        while (ptr->next != nullptr)
        {
            ptr2 = ptr2->next;
            ptr = ptr->next;
        }
        ptr2->next = nullptr;
        free(ptr);
    }
};
void DeleteSpecific(){};
int main()
{
    int n;
    int i = 0;
    for (; i < 5; i++)
    {
        cout << "1.) Insert First \n2.) Insert Last \n3.) Insert Between \n4.) DeleteFirst \n5.) DeleteLast \n6.) DeleteSpecific" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            insertFirst();
            break;
        case 2:
            last();
            break;
        case 3:
            between();
            break;
        case 4:
            DeleteFirst();
            break;
        case 5:
            DeleteLast();
            break;
        case 6:
            DeleteSpecific();
            break;
        default:
            break;
        }
    }
    return 0;
}