#include<iostream>
using namespace std;
template<class T>
T addN(T *arr,int Size){
    int i=0;
    T sum;
    sum=0;
    for(i=0;i<Size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){

    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iSum=addN(arr,5);
    cout<<iSum<<endl;

    float fSum=addN(brr,5);
    cout<<fSum<<endl;

    return 0;
}