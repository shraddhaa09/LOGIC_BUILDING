#include<iostream>
#include<string>

using namespace std;
int calculatetrip(int d,string p){
    int price=50;
    if(d<0){
        cout<<"Distance cant be negative";
        return 0;
    }
    if(d<=10){
        price=price+(d*12);
    }
    else{
        price=price+(d*12);
        price=price+((d-10)*15);
    }
    if(p=="YES"){
        price=(price+(0.2*price));
    }
    return price;
}



int main(){
    int dist;
    string phour;

    cout<<"Enter the distance ";
    cin>>dist;

    cout<<"Is it a peak hour enter YES or NO";
    cin>>phour;
    cout<<"\n";

    int iRet=calculatetrip(dist,phour);
    cout << "Distance: " << dist << " km" << endl;
    cout << "Peak Hour: " << phour << endl;
    cout << "Total Fare: ₹" << iRet << endl;


    return 0;
}