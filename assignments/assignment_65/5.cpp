#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int arr[] = {
        101, 102, 101, 103, 101,
        102, 104, 105, 102, 102, 103
    };

    int n = 11;

    unordered_map<int, int> freq;

    // Count frequency
    for(int x : arr){
        freq[x]++;
    }

    // Find top 2
    int firstProduct = -1;
    int firstFreq = 0;

    int secondProduct = -1;
    int secondFreq = 0;

    for(auto x : freq){

        if(x.second > firstFreq){

            // Current first becomes second
            secondFreq = firstFreq;
            secondProduct = firstProduct;

            // Current becomes first
            firstFreq = x.second;
            firstProduct = x.first;
        }
        else if(x.second > secondFreq){

            secondFreq = x.second;
            secondProduct = x.first;
        }
    }

    cout << firstProduct << " -> " << firstFreq << endl;
    cout << secondProduct << " -> " << secondFreq << endl;

    return 0;
}