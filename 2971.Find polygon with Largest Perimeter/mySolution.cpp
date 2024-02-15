#include <climits>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long perimeter = 0;
        for(auto i:nums) perimeter+=i;
        for(int i=n-1; i>=2; i--){
            perimeter -= nums[i];
            if(perimeter > nums[i]){
                return perimeter + nums[i];
            }
        }
        return -1;
    }
};

int main(){
Solution s;
vector<int> nums; 
nums.push_back(5);
nums.push_back(5);
nums.push_back(50);

long long a = s.largestPerimeter(nums);
cout<<a<<" ";
return 0;
}


