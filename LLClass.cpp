#include <iostream>
#include <stdlib.h>
using namespace std;

class LL
{
    int data;
    LL *next;

public:
    LL()
    {
        head = nullptr;
    }
    ~LL(){};

public:
    void addFirst();
    void display();
    void addLast();
    // void addSpecific();
    LL *head;
};

void LL::addFirst()
{
    LL *ptr = new LL();

    int input = 0;
    cout << "Enter Data" << endl;
    cin >> input;
    ptr->data = input;
    ptr->next = nullptr;

    if (head == nullptr)
        head = ptr;

    else
    {
        ptr->next = head;
        head = ptr;
    }
    cout << "Done" << endl;
    display();
}

void LL::display()
{

    if (head == nullptr)
        cout << "empty" << endl;
    else
    {
        LL *ptr = new LL();
        ptr = head;
        cout << "------DISPLAY-------" << endl;
        while (ptr != nullptr)
        {
            cout << " [ " << ptr->data << " --> " << ptr->next << " ] ";
            ptr = ptr->next;
        }
        cout << endl
             << "--------------------" << endl;
    }
}

void LL::addLast(){
    if (head == nullptr) {
        addFirst();
    }
    else
    {
        LL *ptr = new LL();
        int input = 0;
        cout << "Enter Data" << endl;
        cin >> input >> endl;
        
        while (ptr != 0)
        {
            
        }
        

    }
    
};

int main()
{
    LL a;
    int n;
    int i = 0;
    for (; i < 5; i++)
    {
        cout << "1.) Insert First \n2.) Insert Last \n3.) Insert Between \n4.) DeleteFirst \n5.) DeleteLast \n6.) DeleteSpecific" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            a.addFirst();
            break;
        // case 2:
        //     last();
        //     break;
        // case 3:
        //     between();
        //     break;
        // case 4:clear
        //     DeleteFirst();
        //     break;
        // case 5:
        //     DeleteLast();
        //     break;
        // case 6:
        //     DeleteSpecific();
        //     break;
        default:
            break;
        }
    }
    return 0;
}
