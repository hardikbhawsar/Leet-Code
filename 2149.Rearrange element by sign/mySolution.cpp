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
        int offset = 2;
        for(int i=0; i<nums.size(); i++){
            int m = nums[i], n = nums[i+1] ;
            
            if((m>0 && n>0) || (m<0 && n<0)){
                int temp = nums[i+1];
                nums[i+1] = nums[i+offset];
                nums[i+offset] = temp;
                offset++;
                i--;    
            }
            else{
                offset = 2;
            }
        }
        return nums;
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
    cout<<nums[i];
}
return 0;
}


