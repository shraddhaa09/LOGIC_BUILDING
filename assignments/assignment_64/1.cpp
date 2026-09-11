#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>freq;
    int arr[]={101,102,103,104,101,102,103,104,105};

    for(int x:arr){
        freq[x]++;
    }
    for(auto x:freq){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    
    return 0;
}