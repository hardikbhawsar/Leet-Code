#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0 ;
        for(int x:nums){
            ans^=x;
        }
        return ans;
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