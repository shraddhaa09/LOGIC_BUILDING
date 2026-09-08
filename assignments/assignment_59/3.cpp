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

    // // Check both diagonals
    // for (int i = 0; i < SIZE; i=i+2) {
        
    //     for(int j=0;j<SIZE;j++){
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[i+1][j];
    //         arr[i+1][j]=temp;

    //     }
    // }

    for (int j = SIZE-1; j >=0; j--) {
        for (int i = 0; i < SIZE; i++) {
            cout<< arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}