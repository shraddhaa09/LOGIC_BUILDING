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

    int sum = 0;

    // Check both diagonals
    for (int i = 0; i < SIZE; i++) {
        
        for(int j=0;j<SIZE;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
        sum=0;
    }
    return 0;
}