#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;

    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int num;
    cin >> num;

    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate Armstrong sum
    temp = num;

    while(temp > 0) {
        int digit = temp % 10;

        sum += power(digit, digits);

        temp /= 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}