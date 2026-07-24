#include<iostream>
using namespace std;
class searching{
    private:
        int* Arr;
        int iSize;
    public:
        searching(int iNo);
        ~searching();
        void Accept();
        void Display();

};
searching::searching(int iNo){
    iSize=iNo;
    Arr=new int[iSize];
}
searching::~searching(){
    delete[]Arr;
}

void searching::Accept(){
    int i=0;
    cout<<"Enter the elements: \n";
    for(i=0;i<iSize;i++){
        cout<<Arr[i]<<"\n";
    }
}

void searching::Display(){
    int i=0;
    cout<<"Elements of the array are:\n";
    for(i=0;i<iSize;i++){
        cin>>Arr[i];
    }
}
int main(){
    searching sobj(5);
    sobj.Accept();
    sobj.Display();
    return 0;
}