// Write a program to Print Numbers from 1 to n using class.

#include <iostream>
using namespace std;
class parameter
{
    public: 
    int limit;
    void printer()
    {
        for (int i = 1; i <= limit; i++)
        {
            cout << i;
        }
       
    }
};

int main()
{
    parameter numberline;
    cout << "\nEnter the nth term (limit): ";
    cin >> numberline.limit;
    numberline.printer();
    return 0;
}