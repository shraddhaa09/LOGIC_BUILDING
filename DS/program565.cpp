#include<iostream>
using namespace std;
class searching{
    private:
        int* Arr;
        int iSize;
    public:
        searching(int iNo);
        ~searching();

};
searching::searching(int iNo){
    iSize=iNo;
    Arr=new int[iSize];
}
searching::~searching(){
    delete[]Arr;
}
int main(){
    searching sobj(5);
    return 0;
}