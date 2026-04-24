#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator overloading for +
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Display function
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5), c3;

    c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}