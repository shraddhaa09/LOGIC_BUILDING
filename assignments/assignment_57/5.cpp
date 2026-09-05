#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1;
    string str2;
    int i=0;

    cout<<"Enter the string1: ";
    getline(cin,str1);
    cout<<"Enter the string1: ";
    getline(cin,str2);

    if (str1.length() == str2.length() &&
        (str1 + str1).find(str2) != string::npos) {
        
        cout << "Rotation";
    }
    else {
        cout << "Not Rotation";
    }


    

    return 0;
}