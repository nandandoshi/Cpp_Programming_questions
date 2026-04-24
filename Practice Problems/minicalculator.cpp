// print a rpogram of mini calculator
#include <iostream>
using namespace std;

int main() {
    int a, b;
    int choice;

    cout << "Enter two numbers: ";
        cin >> a >> b;

       cout << "1.Addition" << endl;
      cout << "2. Subtraction" << endl;
       cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
        cout << "Result = " << a + b;
     else if(choice == 2)
         cout << "Result = " << a - b;
      else if(choice == 3)
          cout << "Result = " << a * b;
    else if(choice == 4)
          cout << "Result = " << a / b;
      else
        cout << "Invalid choice";

       return 0;
}
