#include <iostream>
using namespace std;

class Phone
{
public:
    virtual void ShowConfig() = 0;
};

class Iphone : public Phone
{
public:
    void ShowConfig()
    {
        cout << "Iphone Configurations" << endl;
    }
};

class Samsung : public Phone
{
public:
    void ShowConfig()
    {
        cout << "Samsung Configurations" << endl;
    }
};

void show(Phone *obj)
{
    obj->ShowConfig();
}

int main()
{
    Phone *ptr;

    Iphone obj;
    Samsung obj1;

    ptr = &obj;
    
    show(ptr);


    return 0;
}