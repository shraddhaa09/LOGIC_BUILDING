#include<iostream>
using namespace std;
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;

    cout<<"enter the number of the elements:";
    cin>>iLength;

    Brr=new int[iLength];

    cout<<"Enter the elements:";
    for(iCnt=0;iCnt<iLength;iCnt++){
        cin>>Brr[iCnt];
    }

    cout<<"the elements are:";
    for(iCnt=0;iCnt<iLength;iCnt++){
        cout<<Brr[iCnt]<<endl;
    }
    
    delete []Brr;

    return 0;
}