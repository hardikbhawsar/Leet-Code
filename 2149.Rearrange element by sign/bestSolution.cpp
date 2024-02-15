#include <climits>
#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

#include <climits>
#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;
        for(int i = 0; i < n; ++i) {
            if(nums[i] >= 0) {
                ans[pos] = nums[i];
                pos += 2;
            }
            else {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};

int main(){
Solution s;
vector<int> nums; 
nums.push_back(3);
nums.push_back(1);
nums.push_back(-2);
nums.push_back(-5);
nums.push_back(2);
nums.push_back(-4);
nums = s.rearrangeArray(nums);
for(int i=0; i < nums.size();i++){
    cout<<nums[i]<<" ";
}
return 0;
}


