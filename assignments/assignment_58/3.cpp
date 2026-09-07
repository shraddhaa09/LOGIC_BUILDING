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

    int maxValue = arr[0][0];

    // Check both diagonals
    for (int i = 0; i < SIZE; i++) {
        
        // Main diagonal
        if (arr[i][i] > maxValue) {
            maxValue = arr[i][i];
        }

        // Secondary diagonal
        if (arr[i][SIZE - 1 - i] > maxValue) {
            maxValue = arr[i][SIZE - 1 - i];
        }
    }

    cout << "Maximum element from both diagonals = "
         << maxValue << endl;

    return 0;
}