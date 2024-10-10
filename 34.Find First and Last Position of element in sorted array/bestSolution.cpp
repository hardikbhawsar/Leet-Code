/*
Time Complexity: O(logn);
// As it was mentioned in the question that time complexity needed is O(log N) then  the algorithm we gonna use is Binary search. 
*/
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int index = binarySearch(nums, target, true);
        result.push_back(index);
        index = binarySearch(nums, target, false);
        result.push_back(index);
        return result;
    }

    int binarySearch(vector<int>& nums, int target, bool leftBias){
        int left = 0, right = nums.size() - 1;
        int index = -1;

        while(left <= right){
            int mid = (left + right)/2;

            if(target < nums[mid]){
                right = mid - 1;
            } else if (target > nums[mid]) {
                left = mid + 1;
            } else {
                index = mid;
                if(leftBias){
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }

        return index;
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