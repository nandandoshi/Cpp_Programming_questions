// Write a program to compute the area of a triangle and circle by area()
// function.

#include <iostream>
using namespace std;
class parameters
{
    public:
    float height, base, radius, result = 0.0;
    public:
    void areatriangle()
    {   
        result = (height*base)/2;
        cout << "\nThe area of triangle is: " << result;
    }
    public:
    void areacircle()
    {   
        result = radius*radius*3.14;
        cout << "\nThe area of circle is: " << result;
    }
};
int main()
{
    parameters triangle,circle;
    cout << "\nEnter the height: ";
    cin >> triangle.height;
    cout << "\nEnter the base: ";
    cin >> triangle.base;
    triangle.areatriangle();
    cout << "\nEnter the radius: ";
    cin >> circle.radius;
    circle.areacircle();
    return 0;
}