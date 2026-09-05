#include<iostream>
#include<string>
using namespace std;

int main(){
    string sen;
    int i=0;
    int start=0;

    cout<<"Enter the string"<<endl;
    getline(cin, sen);

    for(i=0;i<=sen.length();i++){

        if(sen[i]==' ' || sen[i]=='\0'){

            int left=start;
            int right=i-1;

            while(left<right){
                swap(sen[left],sen[right]);
                left++;
                right--;
            }
            start=i+1;
        }
        }
    cout<<sen;

    return 0;
}