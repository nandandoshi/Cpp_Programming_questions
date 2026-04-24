// Write a C++ program to calculate the electricity bill . And display the final bill 
// with a 2% discount using member function.

#include <iostream>
using namespace std;
class electricCalci
{
    public:
    float inibill=0,finalbill;
    public:
    float member()
    {
        cout << "\nThank you for being a member";
        return finalbill = inibill - (inibill*0.02);
    }
};

int main()  
{
    electricCalci bill;
    float time,rate;
    cout << "\nTime Used: ";
    cin >> time;
    cout << "\nRate of usage:";
    cin >> rate;
    bill.inibill = time*rate;

    bool isMember;
    char temp;
    cout << "\nAre you a member (y/N):";
    cin >> temp;
    switch (temp)
    {
    case 'y':
    case 'Y':
        isMember = true;
        break;
    case 'n':
    case 'N':
        isMember = false;
        break;
    default:
        cout << "\nError!";  
        break;
    }
    if (isMember == true)
    {
        bill.finalbill = bill.member();
        cout << "\nAs you are a member there is a discount of: " << bill.inibill*0.02;
        cout << "\nFinal Bill:" << bill.finalbill;
    }
    else
    {
        bill.finalbill = bill.inibill;
        cout << "\nAs you are not a member no discount" ;
        cout << "\nFinal Bill: " << bill.finalbill;
    }
    
}
