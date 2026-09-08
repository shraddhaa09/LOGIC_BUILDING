#include <iostream>
using namespace std;

#define SIZE 4

int main() {
    int arr[SIZE][SIZE];

    // Input matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> arr[i][j];
        }
    }

    // Check identity matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            if (i == j) {
                // Main diagonal must be 1
                if (arr[i][j] != 1) {
                    cout << "Not an Identity Matrix";
                    return 0;
                }
            }
            else {
                // Non-diagonal elements must be 0
                if (arr[i][j] != 0) {
                    cout << "Not an Identity Matrix";
                    return 0;
                }
            }
        }
    }

    cout << "Identity Matrix";
    return 0;
}