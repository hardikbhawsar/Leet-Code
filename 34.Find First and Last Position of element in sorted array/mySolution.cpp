/*
Time Complexity: 
*/
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int len = nums.size();

        return nums;
    }
};


int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(8);
    arr.push_back(10);

    int target=8;
    vector<int> nums = s.searchRange(arr, target);

    for(int i=0; i< nums.size(); i++){
        cout << nums[i]<<" ";
    }

    return 0;
}