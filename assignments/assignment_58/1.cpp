#include<iostream>
using namespace std;
int main(){
    int row,col;
    // cout<<"Enetr the number of columns and rows in the matrix"<<endl;
    // cin>>row>>col;
    int arr[3][3];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    // Main diagonal
    for (int i = 0; i < row; i++) {
                sum += arr[i][i];
    }

    cout << "Sum of diagonal elements = " << sum << endl;
    return 0;
}
