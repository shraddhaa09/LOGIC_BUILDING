#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int k=capacity;
        int iStep=0;
        int current=0;
        vector<int>ans;

        for(int i=0;i<plants.size();i++){
            current=capacity-plants[i];
            capacity=current;
            if(current<0){
                iStep=0;
                int j=0;
                while(j!=i+1){
                    iStep++;
                    j++;
                }
                capacity=k;
                j=0;
                while(j!=i+1){
                    iStep++;
                    j++;
                }
                capacity=capacity-plants[i];
            }
            else{
                iStep++;
            }
            ans.push_back(iStep);
            iStep=0;
        }
        int sum = 0;
        for (int num : ans) {
            cout<<num<<","<<endl;
        }
        for (int num : ans) {
            sum += num;
        }
        return sum;
    }
};

int main() {
    Solution s;

    vector<int> plants = {2, 2, 3, 3};
    int capacity = 5;

    int result = s.wateringPlants(plants, capacity);

    cout << "Steps needed: " << result << endl;

    return 0;
}