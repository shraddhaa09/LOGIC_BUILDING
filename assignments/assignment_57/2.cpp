#include<iostream>
#include<string>
using namespace std;

int main(){
    string sen;
    int i=0;
    int start=0;
    int max=0;
    string word;

    cout<<"Enter the string"<<endl;
    getline(cin, sen);

    for(i=0;i<=sen.length();i++){

        if(sen[i]==' ' || sen[i]=='\0'){

            int icount=i-start;
    
            if(icount>max){
                max=icount;
                word=sen.substr(start,icount);
            }
            start=i+1;
        }
    }
    cout<<"Logest word :"<<word;

    return 0;
}