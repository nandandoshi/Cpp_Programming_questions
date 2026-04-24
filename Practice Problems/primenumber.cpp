#include <iostream>
using namespace std;
int main()
{
int n, i;
bool prime = true;
cout << "Enter a number: ";
    cin >> n;
if (n <= 1)
    prime = false;
for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
if (prime)
    cout << "Prime number";
    else
    cout << "Not a prime number";
    return 0;
}
