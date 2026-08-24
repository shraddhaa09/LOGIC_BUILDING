#include <iostream>
using namespace std;

int calculateCharge(int minutes) {
    int charge = 0;

    if (minutes <= 5) {
        charge = 0;
    }
    else if (minutes <= 15) {
        charge = (minutes - 5) * 1;
    }
    else {
        charge = (10 * 1) + (minutes - 15) * 2;
    }

    return charge;
}

int main() {
    int minutes;
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid call duration";
        return 0;
    }

    int charge = calculateCharge(minutes);

    cout << "Call Duration: " << minutes << " minutes" << endl;
    cout << "Final Charge: ₹" << charge << endl;

    return 0;
}