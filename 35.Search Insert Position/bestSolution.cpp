#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, r=nums.size();
        while(r>l){
            int  mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            else if(nums[0]>target) return 0;
            else if(nums[mid] < target) l = mid+1;
            else r = mid;
            cout<< mid<<endl;
        }
        return r;
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

int ans = s.searchInsert(nums,val);
cout<< ans;
return 0;
}