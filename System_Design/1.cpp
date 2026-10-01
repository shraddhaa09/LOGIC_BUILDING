#include <iostream>
using namespace std;

void countNumbers() {
    int counter = 0;

    counter++;
    cout << counter;
    counter++;
        cout << counter;

    counter++;

    cout << counter;
}

int main() {
    countNumbers();

    return 0;
}