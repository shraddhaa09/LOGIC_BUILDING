#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<char,int>freq;
    string str="programming";

    for(char ch:str){
        freq[ch]++;
    }

    for(char x:str){
        if(freq[x]==1){
            cout<<"First non repeating character :"<<x<<endl;
            break;
        }

    }
    
    return 0;
}