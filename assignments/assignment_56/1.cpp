#include<iostream>
#include<string>
#include <cctype>
using namespace std;
void checkPalindrome(string str){
    int start=0;
    int end=str.size()-1;
    string org=str;
    while (start<=end)
    {
        swap(str[start++],str[end--]);
    }
    if(str==org){
        cout<<"Palindrome String"<<endl;
    }
    else{
        cout<<"Not Palindrome String"<<endl;
    }

    
}
int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>(str);
    for (char &c : str) {
        c = tolower(static_cast<unsigned char>(c));
    }
    checkPalindrome(str);
    return 0;
}