#include<iostream>
using namespace std;
#pragma pack(1)//it is used to reduce the size of the structure by 1 byte

class ArrayX{
    public:
    int *Arr;
    int iSize;
};

int main(){
    ArrayX aobj;
    cout<<sizeof(aobj)<<endl;//12->size of pointer is 8 bytes and size of integer is 4 bytes so total size is 12 bytes  
    return 0;
}