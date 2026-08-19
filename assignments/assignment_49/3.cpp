#include <iostream>
using namespace std;

void processOrder(int stock, int requested)
{
    // Validation
    if (stock < 0 || requested <= 0)
    {
        cout << "Invalid data";
        return;
    }

    // Check stock availability
    if (requested > stock)
    {
        cout << "Order Failed: Insufficient Stock.";
        return;
    }

    // Deduct requested quantity
    stock = stock - requested;

    cout << "Order Processed Successfully." << endl;
    cout << "Remaining Stock: " << stock << endl;

    // Low stock alert
    if (stock < 5)
    {
        cout << "Low Stock Alert!";
    }
}

int main()
{
    int stock, requested;

    cout << "Enter current stock: ";
    cin >> stock;

    cout << "Enter requested quantity: ";
    cin >> requested;

    processOrder(stock, requested);

    return 0;
}