#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0,i=0;

        while(i<nums.size()){
            if(nums[i]==val){
                nums[i] = nums[nums.size()-1];
                nums.pop_back();
                j++;
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl<<j;
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