#include<iostream>
using namespace std;
void CalculateAmount(int n,int withdraw){
    if(n < 0 || withdraw <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }
    if (withdraw%100!=0)
    {
        cout << "the withdraw amount must be multiple of 100"<<endl;
        return;
    }
    if(withdraw>25000){
        cout<<"the withdrwal amount should be less than 25000"<<endl;
        return;
    }
    if((n-withdraw)<1000){
        cout<<"After the withdrawal the balance must remain atleaast 1000"<<endl;
        return;
    }
        cout<<"Transaction Successful"<<endl;
        cout<<"Remaining Balance is: "<<(n-withdraw)<<endl;
}
int main(){
    int n;
    cout<<"Enter the current balance ";
    cin>>n;

    int withdraw;
    cout<<"Enter the amount for withdrawal ";
    cin>>withdraw;


    CalculateAmount(n,withdraw);
    return 0;
}