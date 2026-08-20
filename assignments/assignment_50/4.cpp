#include <iostream>
using namespace std;

int calculate(int budget, int n)
{
    int price;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> price;

        if (price <= 0)
        {
            cout << "Invalid price";
            return 0;
        }

        if (price <= budget)
        {
            budget = budget - price;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << "Items Purchased: " << count << endl;
    cout << "Remaining Balance: ₹" << budget << endl;

    return 0;
}

int main()
{
    int budget, n;

    cout << "Enter Budget: ";
    cin >> budget;

    cout << "Enter Number of Items: ";
    cin >> n;

    if (budget < 0)
    {
        cout << "Invalid Budget";
        return 0;
    }

    if (n < 0)
    {
        cout << "Invalid Number of Items";
        return 0;
    }

    calculate(budget, n);

    return 0;
}