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
};

int main(){
    ArrayX *aobj1=new ArrayX();//parmaterized constructor
    ArrayX *aobj2=new ArrayX(15);//parmaterized constructor
    //logic (Function call)
    delete aobj1;
    delete aobj2;
    return 0;
}