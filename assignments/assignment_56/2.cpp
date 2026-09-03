#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter two strings:" << endl;
    cout << "1: ";
    cin >> str1;

    cout << "2: ";
    cin >> str2;

    // Different lengths cannot be anagrams
    if (str1.length() != str2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int frequency[256] = {0};

    // Count characters of first string
    for (char c : str1) {
        frequency[c]++;
    }

    // Remove characters of second string
    for (char c : str2) {
        frequency[c]--;
    }

    // Check whether all frequencies became 0
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}