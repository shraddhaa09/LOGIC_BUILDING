#include <iostream>
using namespace std;

void CalculateParkingFee(int hours)
{
    int fee = 0;

    // Validation
    if (hours < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    // First 2 hours
    if (hours <= 2)
    {
        fee = 20;
    }
    else
    {
        // First 2 hours = ₹20
        fee = 20;

        // Extra hours
        fee += (hours - 2) * 10;
    }

    // Penalty for more than 10 hours
    if (hours > 10)
    {
        fee += 50;
    }

    cout << "Total Parking Duration: " << hours << " hours" << endl;
    cout << "Total Parking Fee: " << fee << endl;
}

int main()
{
    int hours;

    cout << "Enter total parking hours: ";
    cin >> hours;

    CalculateParkingFee(hours);

    return 0;
}