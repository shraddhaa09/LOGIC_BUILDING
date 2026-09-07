#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    int count=0;
    int num=0;
    cout<<"Enter the number for which u want to check the frequency of that number in the matrix";
    cin>>num;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==num){
            count++;
            }
        }
    }

    cout << "Frequency of the " << num <<"is : "<<count<< endl;
    return 0;
}
