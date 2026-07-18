#include<iostream>
using namespace std;

class ArrayX{
    public:
        int *Arr;
        int Size;
    ArrayX(int No){
        size=no;
        Arr=new int(size);
    }
    ~ArrayX(){
        delete []Arr;
    }

};
int main(){
    ArrayX aobj(5);
    return 0;
}