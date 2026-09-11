#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    string str;
    vector<string>arr;

    while(true){

        cout << "Enter string: ";
        getline(cin, str);

        if(str == "quit"){
            break;
        }

        arr.push_back(str);

        if(arr.size()>5){
            arr.erase(arr.begin());
        }
    }
    cout << "\nLast 5 visited website:\n";

    for(string x : arr){
        cout << x << endl;
    }


    return 0;
}