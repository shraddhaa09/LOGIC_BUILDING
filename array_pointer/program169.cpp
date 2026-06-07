#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    private:
    int *Arr;
    int iSize;

    public:
    //parametrised constructor with default argument
    ArrayX(int x=5){
        iSize=x;
        Arr=new int[iSize];
    }

    ~ArrayX(){
        delete []Arr;//resourse deallocation
    }

    void accept(){
        int iCnt=0;
        cout<<"Enter the elements:\n";
        for(iCnt=0;iCnt<iSize;iCnt++){
            cin>>Arr[iCnt];
        }
    }

    void Display(){
        int iCnt=0;
        cout<<"elements of the array are:\n";
        for(iCnt=0;iCnt<iSize;iCnt++){
            cout<<Arr[iCnt]<<endl;
        }
    }
    int summation(){
        int iCnt=0,iSum=0;
        for(iCnt=0;iCnt<iSize;iCnt++){
            iSum=iSum+Arr[iCnt];
        }
    }
};

int main(){
    ArrayX *aobj=NULL;
    int iLenght=0;
    int iRet=0;
    cout<<"enter the number of the elements";
    cin>>iLenght;
    
    aobj=new ArrayX();
    
    aobj->accept();
    aobj->Display();

    iRet=aobj->summation();
    cout<<"Summation is:"<<iRet<<endl;;
    delete aobj;

    return 0;
}