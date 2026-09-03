#include <iostream>
using namespace std;

int main() {
    string str1;

    cout << "Enter strings:" << endl;
    cin >> str1;

    int frequency[26] = {0};

    for (char c : str1) {
        frequency[c-'a']++;
    }

    cout<<"Duplicate characters"<<endl;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] >= 2) {
            cout << char(i+'a')<<" ";
        }
    }
    cout<<endl;

    return 0;
}