#include <iostream>
using namespace std;

int calculate(int Marks, int attendance, int income)
{
    if (Marks < 0 || Marks > 100)
    {
        cout << "Invalid Marks" << endl;
        return 0;
    }

    if (attendance < 0 || attendance > 100)
    {
        cout << "Invalid Attendance" << endl;
        return 0;
    }

    if (income < 0)
    {
        cout << "Invalid Income" << endl;
        return 0;
    }

    if (Marks >= 80 && attendance >= 75 && income <= 300000)
    {
        cout << "Scholarship Approved" << endl;
    }
    else
    {
        if (Marks < 80)
        {
            cout << "Scholarship Rejected: Marks below 80%" << endl;
        }
        else if (attendance < 75)
        {
            cout << "Scholarship Rejected: Attendance below 75%" << endl;
        }
        else if (income > 300000)
        {
            cout << "Scholarship Rejected: Family income exceeds ₹3,00,000" << endl;
        }
    }

    return 0;
}

int main()
{
    int Marks, attendance, income;

    cout << "Enter Marks between (0-100): ";
    cin >> Marks;

    cout << "Enter Attendance between (0-100): ";
    cin >> attendance;

    cout << "Enter the income: ";
    cin >> income;

    calculate(Marks, attendance, income);

    return 0;
}