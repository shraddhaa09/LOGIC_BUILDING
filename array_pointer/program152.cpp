#include<iostream>
using namespace std;

class ArrayX{
public:
    int Summation(int Arr[],int iSize){
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
};
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int iRet=0;
    ArrayX aobj;

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
    
    iRet=aobj.Summation(Brr,iLength);
    cout<<"Summation is :"<<iRet<<endl;
    delete []Brr;


    return 0;
}