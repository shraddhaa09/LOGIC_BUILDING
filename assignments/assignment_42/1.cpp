#include<iostream>
using namespace std;

template<class T>

void display (T no1,int iSize){
    int i=0;
    for(i=0;i<iSize;i++){
        cout<<no1<<" ";
    }

    cout<<endl;
}
int main(){
    display('M',7);
    display(11,3);
    display(3.7,6);

    return 0;
}