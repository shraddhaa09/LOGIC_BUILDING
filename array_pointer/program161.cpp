#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    public:
    int *Arr;
    int iSize;

    ArrayX(int x){
        iSize=x;//characteristic initialization
        Arr=new int[iSize];//resourse allocation
    }

    ~ArrayX(){
        cout<<"inside destructor\n";
        delete []Arr;//resourse deallocation
    }
};

int main(){
    ArrayX *aobj1=new ArrayX(5);
    //logic (Function call)
    delete aobj1;
    return 0;
}