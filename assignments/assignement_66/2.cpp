#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {100, 4, 200, 1, 3,2,5};
    int n = 7;

    unordered_set<int>seen;

    for(int i=0;i<n;i++){
        seen.insert(arr[i]);
    }

    int longest=0;

    for(int i=0;i<n;i++){
            if(seen.find(arr[i]-1)==seen.end()){
                int current=arr[i];
                int length=1;

                while (seen.find(current+1)!=seen.end())
                {
                    current++;
                    length++;
                }

                longest=max(longest,length);
                
            }
    }
    cout << "Longest consecutive sequence length = " << longest << endl;
    return 0;
    
}
