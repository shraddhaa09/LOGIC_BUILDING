#include<iostream>
using namespace std;

class ArrayX{
    public:
    int *Arr;
    int iSize;
};

int main(){
    ArrayX aobj;
    cout<<sizeof(aobj)<<endl;//16->size of pointer is 8 bytes and size of integer is 4 bytes and size of integer is 4 bytes so total size is 16 bytes

    return 0;
}