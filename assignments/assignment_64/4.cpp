#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>freq;
    int arr[]={101,102,103,101,102,104};

    for(int x:arr){
        freq[x]++;
    }
    for(auto x:freq){
        if(x.second>1){
            cout<<x.first<<endl;
        }
    }
    
    return 0;
}