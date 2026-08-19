#include <iostream>
#include <string>
using namespace std;

void CalculateAmount(int amount, string membership)
{
    // Validation
    if (amount <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if (membership != "Premium" && membership != "Regular")
    {
        cout << "Invalid input." << endl;
        return;
    }

    double discount = 0;
    double finalAmount = amount;

    // Main discount
    if (amount > 5000)
    {
        discount = amount * 0.20;
    }
    else if (amount > 2000)
    {
        discount = amount * 0.10;
    }

    // Amount after main discount
    finalAmount = amount - discount;

    // Premium member gets extra 5% discount
    if (membership == "Premium")
    {
        double premiumDiscount = finalAmount * 0.05;
        discount += premiumDiscount;
        finalAmount -= premiumDiscount;
    }

    cout << "Original Amount: ₹" << amount << endl;
    cout << "Total Discount: ₹" << discount << endl;
    cout << "Final Payable Amount: ₹" << finalAmount << endl;
}

int main()
{
    int amount;
    string membership;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Enter membership type (Premium/Regular): ";
    cin >> membership;

    CalculateAmount(amount, membership);

    return 0;
}