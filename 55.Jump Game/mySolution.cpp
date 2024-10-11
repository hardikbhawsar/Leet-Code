/*
Time Complexity: O(n);
*/
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        for(int i= nums.size()-2; i>=0; i--){
            if(i+nums[i] >= goal){
                goal = i;
            }
        }
        return goal == 0;
    }
};


int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(4);

    bool ans = s.canJump(arr);
    cout<<ans;
    return 0;
}