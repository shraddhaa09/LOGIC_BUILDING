#include <iostream>
using namespace std;

void CalculateBill(int units)
{
    int bill = 0;

    // Validation
    if (units < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    // First 100 units
    if (units <= 100)
    {
        bill = units * 5;
    }
    // 101 to 200 units
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    // Above 200 units
    else
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    cout << "Total Units Consumed: " << units << endl;
    cout << "Total Electricity Bill: ₹" << bill << endl;
}

int main()
{
    int units;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    CalculateBill(units);

    return 0;
}