#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i+=2){
            if(nums[i-1]!=nums[i]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};

int main(){
Solution s;
vector<int> nums; 

nums.push_back(3);
nums.push_back(2);
nums.push_back(4);
nums.push_back(3);
nums.push_back(2);
int ans = s.singleNumber(nums);
cout<< ans;
return 0;
}