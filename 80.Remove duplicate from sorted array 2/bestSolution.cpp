#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        if(nums.size()<=2)return nums.size();
        int j=1;
        for(int i=2;i<nums.size();i++){
            if(nums[j-1]!=nums[i]){
               nums[++j]=nums[i];
            }
        }
        return ++j;
    }
};

int main(){
Solution s;
vector<int> nums; 

nums.push_back(1);
nums.push_back(1);
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
int ans = s.removeDuplicates(nums);
cout<< ans;
return 0;
}