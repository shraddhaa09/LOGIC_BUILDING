#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int fact[10] = {
        1, 1, 2, 6, 24,
        120, 720, 5040, 40320, 362880
    };

    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += fact[digit];
        num /= 10;
    }

    if (sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}