// Write a C++ program to display 10 students; records using class and object.

#include <iostream>
using namespace std;
class student_info
{
    public:
    struct student
    {
        string name,div,department;
        int roll_no;    
    }student[2];
    public:
    void addinfo()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "\n-- Enter the student info " <<i+1<<  " --";
            cout << "\nName: ";
            cin >> student[i].name;
            cout << "Division: ";
            cin >> student[i].div;
            cout << "Department: ";
            cin >> student[i].department;
            cout << "Roll No: ";
            cin >> student[i].roll_no;
        }
    }
    void showinfo()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << "\n-- Student Info " <<i+1<<  " --";
            cout << "\nName: " << student[i].name;
            cout << "\nDivision: " << student[i].div;
            cout << "\nDepartment: " << student[i].department;
            cout << "\nRoll No: " << student[i].roll_no;
        }
}
};

int main()
{
    student_info details;
    details.addinfo();
    details.showinfo();
    return 0;
}