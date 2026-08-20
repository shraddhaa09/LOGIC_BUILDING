#include <iostream>
using namespace std;

void calculate(int battery)
{
    if (battery < 0 || battery > 100)
    {
        cout << "Invalid Battery Percentage" << endl;
        return;
    }

    cout << "Battery Percentage: " << battery << "%" << endl;

    if (battery <= 5)
    {
        cout << "Status: Critical" << endl;
    }
    else if (battery <= 15)
    {
        cout << "Status: Low" << endl;
    }
    else
    {
        cout << "Status: Normal" << endl;
    }
}

int main()
{
    int battery;

    cout << "Enter Battery Percentage: ";
    cin >> battery;

    calculate(battery);

    return 0;
}