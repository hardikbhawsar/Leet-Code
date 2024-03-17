#include <climits>
#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit= 0, min = INT_MAX, profit=0;
        for(int i=0; i< prices.size(); i++){
            if(min>prices[i]){
                min = prices[i];
            }
            profit = prices[i] - min;    
            if(profit>max_profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
};


int main(){
Solution s;
vector<int> nums; 

nums.push_back(7);
nums.push_back(1);
nums.push_back(5);
nums.push_back(3);
nums.push_back(6);
nums.push_back(4);
int ans = s.maxProfit(nums);
cout<< ans;
return 0;
}