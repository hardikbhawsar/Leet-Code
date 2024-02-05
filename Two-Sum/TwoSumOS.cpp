#include<iostream>
#include <unordered_map>
#include<vector>
#include<map>
using namespace std;

class solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;
            int n= nums.size();

            for(int i=0; i< n; i++){
                int second = target - nums[i];
                if(mp.count(second)){
                    return {mp[second],i};
                }
                mp[nums[i]] = i;
            }
            return {};

        }
};


int main(){
solution s;
vector<int> nums; 
nums.push_back(2);
nums.push_back(7);
nums.push_back(11);
nums.push_back(15);
s.twoSum(nums, 9);
return 0;
}