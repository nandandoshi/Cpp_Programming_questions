#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void display()
    {
        cout << "This is Base class function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    void display()
    {
        cout << "This is Derived class function" << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // Calls derived class function

    return 0;
}