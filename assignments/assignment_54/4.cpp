#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int original = num;
    int sum = 0;
    int n=num;

    while(n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout<<"the number after while "<<num<<endl;
    cout<<"the number after while "<<n<<endl;
    if(original % sum == 0) {
        cout << "Harshad Number";
    }
    else {
        cout << "Not Harshad Number";
    }

    return 0;
}