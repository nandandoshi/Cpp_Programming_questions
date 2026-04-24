// Write a C++ program to Swap two numbers using class.

#include <iostream>
class parameters
{
    public:
    int num1=0,num2=0,temp=0;
    public:
    void swap()
    {
        std::cout << "\nThe numbers before swapping: " << num1 <<" " << num2;
        temp = num2;
        num2 = num1;
        num1 = temp; 
        std::cout << "\nThe numbers after swapping: " << num1 <<" " << num2;
    }
};

int main()
{
    parameters swapnum;
    std::cout << "\nEnter the numbers: ";
    std::cin >> swapnum.num1;
    std::cin >> swapnum.num2;
    swapnum.swap();
    return 0;
}
