#include<iostream>
#include<string>
using namespace std;

int main(){
    string sen;
    int i=0;
    int icountv=0;
    int icountc=0;

    cout<<"Enter the string: ";
    getline(cin,sen);

    for(i=0;i<sen.length();i++){
        if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u'){
            icountv++;
        }
        else{
            icountc++;
        }
    }
    cout<<"Vowels :"<<icountv<<endl;
    cout<<"Consonants : "<<icountc;

    return 0;
}