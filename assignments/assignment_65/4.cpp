#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> freq;

    string arr[7] = {
        "java", "python", "java", "c",
        "java", "python", "cpp"
    };

    // Count frequency
    for(auto x : arr){
        freq[x]++;
    }

    // Find most frequent word
    string mostFrequent;
    int maxFreq = 0;

    for(auto x : freq){

        cout << x.first << " -> " << x.second << endl;

        if(x.second > maxFreq){
            maxFreq = x.second;
            mostFrequent = x.first;
        }
    }

    cout << "\nMost frequent word : " << mostFrequent << endl;
    cout << "Frequency : " << maxFreq << endl;

    return 0;
}