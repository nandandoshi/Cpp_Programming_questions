//Write a program using Class to check if a year is a leap year or not.
#include <iostream>
using namespace std;

class yearchecker
{
    public:
    int year;
    public:
    void leapyear()
    {
    if (year % 4 == 0 || (year % 400 == 0) && (year % 100 != 0)) 
    {
        cout << year << " is a Leap Year.";
    } 
    else 
    {
        cout << year << " is not a Leap Year.";
    }
    }
};

int main()
{
    yearchecker year;
    cout << "Enter a year: ";
    cin >> year.year;
    return 0;
}
