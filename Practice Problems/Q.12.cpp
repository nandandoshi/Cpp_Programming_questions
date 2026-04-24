// Write program to calculate medical bill of the person using constructor.

#include <iostream>
using namespace std;

class medbill
{
    int patientID;
    float consultationFee;
    float medicinecosts;
    float testcosts;
    float totalBill;

    public:
    medbill(int id, float consult, float medicine, float test) 
    {
        patientID = id;
        consultationFee = consult;
        medicinecosts = medicine;
        testcosts = test;
        totalBill = consultationFee + medicinecosts + testcosts;
    }

    void displayBill() 
    {
        cout << ">----Information of Patient----<" << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Consultation Fee: " << consultationFee << endl;
        cout << "Medicine Charges: " << medicinecosts << endl;
        cout << "Test Charges: " << testcosts << endl;
        cout << "Total Medical Bill: " << totalBill << endl;
    }
};

int main() 
{
    int id;
    float consult, medicine, test;

    cout << "Enter the Patient ID: ";
    cin >> id;
    cout << "Enter the Consultation Fee: ";
    cin >> consult;
    cout << "Enter total Medicine Costs: ";
    cin >> medicine;
    cout << "Enter total Test Costs: ";
    cin >> test;

    medbill patient(id, consult, medicine, test);
    patient.displayBill();

    return 0;
}