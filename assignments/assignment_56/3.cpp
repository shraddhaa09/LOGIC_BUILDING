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

    // Check whether all frequencies became 0
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == 0) {
            cout << "Not Pangram";
            return 0;
        }
    }

    cout << "Pangram";

    return 0;
}