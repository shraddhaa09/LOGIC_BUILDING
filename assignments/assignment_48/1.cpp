#include<iostream>
using namespace std;
void CalculateFine(int n){
    int fine=0;
    if (n < 0)
    {
        cout << "Invalid input.";
        return;
    }
    if(n<=7){
        cout<<"Returned on time No fine applicable"<<endl;
    }
    else if(n>=8 && n<=12){
        for(int i=8;i<=12;i++){
            fine+=5;
        }
        cout<<"The book is returned late so rupees 5 per day are charged so u have to pay :"<<fine<<endl;
    }
    else{
        for(int i=13;i<=n;i++){
            fine+=10;
        }
        cout<<"The book is returned late so rupees 10 per day are charged so u have to pay : %d "<<fine<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the total number of days the book was kept";
    cin>>n;


    CalculateFine(n);
    return 0;
}