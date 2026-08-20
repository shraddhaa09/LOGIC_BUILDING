#include<iostream>
using namespace std;

void HospitalBill(int days,string wardt,int medicineb,int consultf,string insured){
    int roomcharge=0;
    if(days<0||medicineb<0||consultf<0){
        cout<<"Invalid Data";
        return ;
    }
    if(wardt!="Normal" && wardt!="ICU"){
        cout<<"Invalid Data";
        return ;
    }
    if (insured != "Yes" && insured != "No")
    {
        cout << "Invalid Insurance Status";
        return;
    }
    if(wardt=="Normal"){
        roomcharge=days*500;
    }
    else{
        roomcharge=days*1000;
    }
    int bill=0;
    int Insurance_cover=0;
    bill = consultf + medicineb + roomcharge;
    if(insured=="Yes"){
        int sevenbill=bill*0.7;
        if(sevenbill<50000){
            Insurance_cover=bill;
        }
        else{
            Insurance_cover=50000;
        }
    }

    int finalpay=bill-Insurance_cover;


    cout << "Total Bill: ₹" << bill << endl;
    cout << "Insurance Cover: " << Insurance_cover << endl;
    cout << "Final Pay: ₹" << finalpay << endl;

}
int main(){
    int days,medicineb,consultf;
    string wardt,insured;

    cout<<"Enter the number of the days";
    cin>>days;

    cout<<"Enter the wardType(Normal/ICU)";
    cin>>wardt;

    cout<<endl;

    cout<<"Enter the medicineBill";
    cin>>medicineb;

    cout<<"Enter the cosultationFee";
    cin>>consultf;

    cout<<"Have you taken insurance(Yes/No)";
    cin>>insured;

    HospitalBill(days,wardt,medicineb,consultf,insured);


    return 0;
}