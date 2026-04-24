// Write a program to find a prime number.

#include <iostream>
using namespace std;
class parameters
{
    public:
    int number,temp=0;
    public:
    void isPrime()
    {   
        if (number <= 1)
        {
            cout << "Is not Prime";
        }
        else if (number == 2)
        {
            cout << "Is Prime";
        }
        else
        {
        temp = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
                temp = 1;
        }
        if (temp == 1)
        {
            cout << "Is not Prime";
        }
        else
        {
            cout << "Is Prime";
        }
        } 
    }
};
int main()
{
    parameters primecheck;
    cout << "Enter a number: ";
    cin >> primecheck.number;
    primecheck.isPrime();
    return 0;
}