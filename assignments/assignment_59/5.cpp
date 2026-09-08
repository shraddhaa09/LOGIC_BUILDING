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
    int count=0,count1=0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
                if (arr[i][j] == 0) {
                    count++;
                }
                else{
                    count1++;
                }
            }
        }
    if(count>count1){
        cout<<"Sparse matrix";
    }
    else{
        cout<<"Not a sparse matrix";
    }

    return 0;
}