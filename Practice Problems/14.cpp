#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    virtual void display()
    {
        cout << "This is Base class display function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        cout << "This is Derived class display function" << endl;
    }
};

int main()
{
    Base *bptr;
    Derived d;

    bptr = &d;

    // Calls Derived class function using virtual function
    bptr->display();

    return 0;
}