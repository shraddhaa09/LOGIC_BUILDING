#include<iostream>
#include<string>
using namespace std;

int main(){
    string sen;
    int i=0;
    string word="";

    cout<<"Enter the string: ";
    getline(cin,sen);

    for(i=0;i<sen.length();i++){
        if(word.find(sen[i])!=string::npos){
            continue;
        }
        word+=sen[i];
    }
    //     bool visited[26] = {false};

    // for (char c : sen) {
    //     if (visited[c - 'a']) {
    //         continue;
    //     }

    //     visited[c - 'a'] = true;
    //     word += c;
    // }

    cout<<word;

    return 0;
}