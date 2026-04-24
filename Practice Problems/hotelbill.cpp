#include <iostream>
using namespace std;
int main() {
    int tableNo, n, qty;
    float price, total = 0, discount = 0;
    string name, contact, item;
cout << "Enter Table No: ";
    cin >> tableNo;
cout << "Enter Customer Name: ";
    cin >> name;
     cout << "Enter Contact: ";
    cin >> contact;
cout << "Enter Number of Items: ";
    cin >> n;
for(int i = 1; i <= n; i++) {
        cout << "\nItem Name: ";
         cin >> item;
         cout << "Quantity: ";
         cin >> qty;
        cout << "Price: ";
         cin >> price;

        total = total + (qty * price);
    }
if(total > 5000)
        discount = total * 0.20;
     else if(total > 3000)
        discount = total * 0.10;
      else if(total > 1000)
        discount = total * 0.05;

    cout << "\n----------- Hotel Bill -----------";
     cout << "\nTable No: " << tableNo;
    cout << "\nCustomer Name: " << name;
cout << "\nContact: " << contact;
    cout << "\nTotal Amount: " << total;
cout << "\nDiscount: -" << discount;
cout << "\nFinal Amount: " << total - discount;
return 0;
}
