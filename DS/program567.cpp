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
        bool LinearSearch(int iNo);

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
        cin>>Arr[i];
    }
}

void searching::Display(){
    int i=0;
    cout<<"Elements of the array are:\n";
    for(i=0;i<iSize;i++){
        cout<<Arr[i]<<"\n";
    }
}

bool searching::LinearSearch(int iNo){
    bool bFlag=false;
    int i=0;
    for(i=0;i<iSize;i++){
        if(Arr[i]==iNo){
            bFlag=true;
            break;
        }
    }
    return bFlag;
}
int main(){
    searching sobj(5);
    sobj.Accept();
    sobj.Display();
    if(sobj.LinearSearch(3==true)){
        cout<<"Element is present\n";
    }
    else{
        cout<<"Element is not present\n";
    }
    return 0;
}