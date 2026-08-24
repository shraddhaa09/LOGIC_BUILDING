#include<iostream>
using namespace std;
int main(){
    int num=0;
    int reserved=0;
    int iDigit=0;

    cout<<"Enter the number ";
    cin>>num;

    int n=num;

    while(num>0){
        iDigit=num%10;
        reserved=reserved*10+iDigit;
        num=num/10;
    }
    if(n==reserved){
        cout<<"Palindrome number"<<endl;
    }
    else{
        cout<<"Not a Palindrone NUmber"<<endl;
    }
    return 0;
}