#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority=0, rep = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!= majority){
                if(rep==0){
                    majority = nums[i];
                    rep = 1;
                }
                else {
                    rep--;
                }
            }
            else {
                rep++;
            }
        }
     return majority;   
    }
};


int main(){
Solution s;
vector<int> nums; 

nums.push_back(3);
nums.push_back(3);
nums.push_back(4);
int ans = s.majorityElement(nums);
cout<< ans;
return 0;
}