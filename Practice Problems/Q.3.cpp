// Write a program to find Sum of Natural Numbers.

#include <iostream>
using namespace std;
class parameter
{
    public: 
    int sumofnum=0,limit;
    void SON()
    {
        for (int i = 1; i <= limit; i++)
        {
            sumofnum += i;
        }
        cout << "The sum of natural numbers are: " << sumofnum;
    }
};

int main()
{
    parameter sumofnum;
    cout << "\nEnter the nth term (limit): ";
    cin >> sumofnum.limit;
    sumofnum.SON();
    return 0;
}