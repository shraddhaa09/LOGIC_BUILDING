#include<iostream>
using namespace std;
template<class T>
int searchLast(T *arr,int Size,T iNo){
    int i=0;
    int last=0;
 
    for(i=0;i<Size;i++){
        if(arr[i]==iNo){
            last=i;
        }
    }
    return last;
}
int main(){

    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet=searchLast(arr,9,10);
    cout<<iRet<<endl;

    

    return 0;
}