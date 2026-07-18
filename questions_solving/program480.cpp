#include<iostream>
using namespace std;
template <class X>
X Maximum(X No1,X No2,X No3){
    X Ans;
    if(No1>No2 && No1>No3) {
        Ans= No1;
    }
    else if(No2>No1 && No2>No3)
    {
        Ans=No2;
    }
    else{
        Ans=No3;
    }
    
    return Ans;

}
int main(){

    cout<<Maximum(21.5f,11.5f,1.5f)<<"\n";
    cout<<Maximum(21.5,11.5,100.5)<<"\n";
    cout<<Maximum(21,56,1)<<"\n";

    return 0;
}