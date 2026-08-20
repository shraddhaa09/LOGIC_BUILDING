#include <iostream>
#include <string>
using namespace std;

void trainbooking(int d, string c, int t, int age)
{
    int baseFare = 0;
    int classCharge = 0;
    int tatkalCharge = 0;
    int seniorDiscount = 0;

    if(d < 0 || t < 0 || age < 0)
    {
        cout << "Invalid Data";
        return;
    }

    if(c != "Sleeper" && c != "3AC" && c != "2AC")
    {
        cout << "Invalid Data";
        return;
    }

    // Distance slabs
    // Replace these values with the actual slabs from your question
    if(d <= 100)
    {
        baseFare = 300;
    }
    else if(d <= 500)
    {
        baseFare = 500;
    }
    else
    {
        baseFare = 800;
    }

    // Class charges
    if(c == "Sleeper")
    {
        classCharge = 500;
    }
    else if(c == "3AC")
    {
        classCharge = 700;
    }
    else
    {
        classCharge = 1000;
    }

    int totalBill = baseFare + classCharge;

    // Tatkal
    if(t < 24)
    {
        tatkalCharge = totalBill * 0.30;
        totalBill = totalBill + tatkalCharge;
    }

    // Senior citizen
    if(age >= 60)
    {
        seniorDiscount = totalBill * 0.40;
        totalBill = totalBill - seniorDiscount;
    }

    cout << "Base Fare: ₹" << baseFare << endl;
    cout << "Class Charge: ₹" << classCharge << endl;
    cout << "Tatkal Charge: ₹" << tatkalCharge << endl;
    cout << "Senior Discount: ₹" << seniorDiscount << endl;
    cout << "Final Fare: ₹" << totalBill << endl;
}

int main()
{
    int distance, bookingHoursBefore, age;
    string classType;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter class (Sleeper/3AC/2AC): ";
    cin >> classType;

    cout << "Enter booking hours before journey: ";
    cin >> bookingHoursBefore;

    cout << "Enter age: ";
    cin >> age;

    trainbooking(distance, classType, bookingHoursBefore, age);

    return 0;
}