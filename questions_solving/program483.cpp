#include<iostream>
using namespace std;


double Summation(double Arr[],double Size){
    int i=0;
    double sum=0;
    for(i=0;i<Size;i++){
        sum=Arr[i]+sum;
       
    }
    return sum;
}
int main(){

    double Brr[]={10.2,20.2,30.2,40.2,50.2};
    Summation(Brr,5);
    cout<<Summation(Brr,5)<<"\n";


    return 0;
}