#include<iostream>
using namespace std;
void eligibilitypersonalloan(int age,int in,int credit,string loan){
    if(age<0|| in<0||credit<0){
        cout<<"Invalid data";
        return;
    }
    if(loan!="Yes" && loan!="No"){
        cout<<"Invalid data";
        return;
    }
    if(age<21 || age>60){
        cout<<"Age must be from 21 to 60";
        return;
    }
    else if (in<25000)
    {
        cout<<"monthly income must be above 25000";
        return;
    }
    else if(credit<700){
        cout<<"credit score must be equal or above 700";
        return;
    }
    else if (loan=="Yes")
    {
        cout<<"must not have an existing unpaid loan";
        return;
    }
    else{
        cout<<"Loan Approved";
    }
    
    
    return;
}
int main(){
    int age;
    int income;
    int creditscore;
    string loan;
    

    cout<<"enter age";
    cin>>age;

    cout<<"enter monthly income";
    cin>>income;

    cout<<"enter credit score";
    cin>>creditscore;

    cout << "Existing unpaid loan (Yes/No): ";
    cin >> loan;

    eligibilitypersonalloan(age,income,creditscore,loan);

    return 0;
}