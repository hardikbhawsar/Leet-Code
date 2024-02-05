#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1; //unique elements

        for(int i=1; i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i =0; i< nums.size();i++){
            cout<<nums[i];
        }
        cout<<endl<<j;
        return j;
    }
};


int main(){
Solution s;
vector<int> nums; 
nums.push_back(1);
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
s.removeDuplicates(nums);
return 0;
}