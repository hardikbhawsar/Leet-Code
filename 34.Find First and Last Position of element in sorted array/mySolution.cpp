/*
Time Complexity: O(2n);
*/
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int len = nums.size();
        for(int i = 0; i <= len-1; i++){
            if (nums[i] == target ){
                result.push_back(i);
                break;
            }
        }
        for(int i = len-1; i >= 0; i--){
            if (nums[i] == target ){
                result.push_back(i);
                break;
            }
        }
        if(result.size() == 0){
            result.push_back(-1);
            result.push_back(-1);
        }
        return result;
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