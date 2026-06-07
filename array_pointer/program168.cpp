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
};

int main(){
    ArrayX *aobj=NULL;
    int iLenght=0;
    cout<<"enter the number of the elements";
    
    ArrayX *aobj1=new ArrayX();//parmaterized constructor
    //logic (Function call)
    aobj->accept();

    return 0;
}