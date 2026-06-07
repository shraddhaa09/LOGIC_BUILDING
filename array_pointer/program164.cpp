#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    private:
    int *Arr;
    int iSize;

    public:
    ArrayX(int x){
        iSize=x;//characteristic initialization
        Arr=new int[iSize];//resourse allocation
    }

    ~ArrayX(){
        delete []Arr;//resourse deallocation
    }
};

int main(){
    ArrayX *aobj1=new ArrayX(5);
    //logic (Function call)
    cout<<aobj1->iSize<<"\n";
    aobj1->iSize=0;//issue
    aobj1->Arr=NULL;//issue
    delete aobj1;
    return 0;
}