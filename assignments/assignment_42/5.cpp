#include<iostream>
using namespace std;
template<class T>
void Reverse(T *arr,int Size){
    int i=0;
 
    for(i=Size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[]={10,20,30,10,30,40,10,40,10};
    int i=0;

    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse(arr,9);

    return 0;
}