#include<iostream>
using namespace std;
template<class T>
T Max(T *arr,int Size){
    int i=0;
    T max;
    max=-1;
    for(i=0;i<Size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){

    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iRet=Max(arr,5);
    cout<<iRet<<endl;

    float fRet=Max(brr,5);
    cout<<fRet<<endl;
    

    return 0;
}