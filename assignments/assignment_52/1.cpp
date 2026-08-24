#include <iostream>
using namespace std;

int main() {
    int days;
    cin >> days;

    if (days < 0) {
        cout << "Invalid number of days";
        return 0;
    }

    double bill = days * 3000;

    if (days > 7) {
        bill = bill * 0.95;//calculates the final amount after discount
    }

    cout << "Total Stay Duration: " << days << " days" << endl;
    cout << "Final Bill Amount: ₹" << bill << endl;

    return 0;
}