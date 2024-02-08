#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        for(int i=0; i< nums.size(); i++){
            if (target < nums[i+1] && target > nums[i]) {
                index = i+1;
                break;
            }
            else if(nums[i]==target){
                index = i;
                break;
            }
            else if (target>nums[nums.size()-1]) {
                index = nums.size();
                break;
            }
            else if (target<nums[0]) {
                index = 0;
                break;
            }
        }
        cout<< index;
        return index;
    }
};


int main(){
Solution s;
vector<int> nums; 
int val = 0;

nums.push_back(1);
nums.push_back(3);
nums.push_back(5);
nums.push_back(6);

s.searchInsert(nums,val);
return 0;
}