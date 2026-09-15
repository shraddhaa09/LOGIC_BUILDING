#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {1200, 500, 700, 300, 1500};
    int n = 5;
    int target = 2000;

    unordered_set<int>seen;

    for(int i=0;i<5;i++){
        int required=target-arr[i];
        if(seen.find(required)!=seen.end()){
            cout<<required<<"+"<<arr[i]<<"="<<target<<endl;
            return 0;
        }
        seen.insert(arr[i]);
    }
    cout<<"Pair not found"<<endl;

    return 0;
    
}
