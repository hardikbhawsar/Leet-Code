#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]!= val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};


int main(){
Solution s;
vector<int> nums; 
int val = 2;
nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
nums.push_back(0);
nums.push_back(4);
nums.push_back(2);

s.removeElement(nums,val);
return 0;
}