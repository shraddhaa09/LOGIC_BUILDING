#include <iostream>
using namespace std;

int calculate(int weight)
{
    int charge = 0;

    if (weight <= 0)
    {
        cout << "Invalid weight" << endl;
        return 0;
    }

    if (weight <= 1)
    {
        charge = 50;
    }
    else if (weight <= 5)
    {
        charge = 50 + ((weight - 1) * 20);
    }
    else
    {
        charge = 150 + ((weight - 5) * 30);
    }

    return charge;
}

int main()
{
    int weight;

    cout << "Enter parcel weight: ";
    cin >> weight;

    int iRet = calculate(weight);

    if (weight > 0)
    {
        cout << "Parcel Weight: " << weight << " kg" << endl;
        cout << "Courier Charge: ₹" << iRet << endl;
    }

    return 0;
}