#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[],T Size){
    int i=0;
    for(i=0;i<Size;i++){
        cout<<Arr[i]<<"\n";
    }
}
template <class T>

T Summation(T Arr[],T Size){
    int i=0;
    T sum=0;
    for(i=0;i<Size;i++){
        sum=Arr[i]+sum;
    }
    return sum;
}
int main(){

    int Brr[]={10,20,30,40,50};
    int Crr[]={10,20,30,40,50};

    Display(Brr,5);
    cout<<Summation(Brr,5)<<"\n";

    Display(Crr,5);
    cout<<Summation(Crr,5)<<"\n";



    return 0;
}