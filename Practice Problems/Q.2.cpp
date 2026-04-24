//Write a program to find a prime number.

#include <iostream>
int main()
{
   int num; 
   std::cout << "Enter a Number: ";
   std::cin >> num;
        if (num <= 1)
        {
            std::cout << "Is not Prime";
        }
        else if (num == 2)
        {
            std::cout << "Is Prime";
        }
        else if (num % 2 == 0)
        {
            std::cout << "Is Prime";
        }
        else
        {
            std::cout << "Is not Prime";
        }
   return 0;
}