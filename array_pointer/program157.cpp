#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    public:
    int *Arr;
    int iSize;

    //default constructor
    ArrayX(){

    }

    //parameterized constructor
    ArrayX(int x){

    }
};

int main(){
    ArrayX aobj1();
    ArrayX aobj2(5);
    cout<<sizeof(aobj1)<<endl;
    cout<<sizeof(aobj2)<<endl;
    return 0;
}