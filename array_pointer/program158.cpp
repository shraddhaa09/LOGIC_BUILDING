#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    public:
    int *Arr;
    int iSize;


    //parameterized constructor
    ArrayX(int x){
        iSize=x;//characteristic initialization
        Arr=new int[iSize];//resourse allocation
        cout<<"inside parameterized constructor\n";
    }

    //destructor
    ~ArrayX(){
        cout<<"inside destructor\n";
        delete []Arr;//resourse deallocation
    }
};

int main(){
    ArrayX aobj1(5);
    cout<<sizeof(aobj1)<<endl;
    return 0;
}