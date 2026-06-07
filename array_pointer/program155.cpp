#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    public:
    int *Arr;
    int iSize;
    ArrayX(int x){

    }
};

int main(){
    ArrayX aobj;//error
    cout<<sizeof(aobj)<<endl;
    return 0;
}