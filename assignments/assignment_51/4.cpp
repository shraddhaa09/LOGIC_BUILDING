#include<iostream>
using namespace std;
int waterBill(int u,int w){
    int meter_charge=0;
    int late_fee=0;
    int total_Bill;

    // Validation
    if(u < 0 || w < 0)
    {
        cout << "Invalid Data";
        return 0;
    }

    //slabs what i have decided
    if(u<=100){
        meter_charge=100;
    }
    else if(u>100 && u<=200){
        meter_charge=200;
    }
    else if(u>200 && u<=300){
        meter_charge=300;
    }
    else{
        meter_charge=400;
    }
    if(w>0){
        double penalty=0.02*w;
        if(penalty>0.10){
            penalty=0.10;
            return 0;
        }
        late_fee=meter_charge*penalty;
    }
    total_Bill=meter_charge+late_fee;

    return total_Bill;



}
int main(){
    int unit,weekLate;
    cout<<"Enter the units used:";
    cin>>unit;

    cout<<"If late how many weeks Late:";
    cin>>weekLate;

    int iRet=waterBill(unit,weekLate);

    cout<<"BillAmount:"<<iRet<<endl;
    return 0;
}