#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, i = 0, j = height.size()-1;
        int first = height[i], last = height[j];
        area = (j-i)*min(first,last);
        while(j>i){
            if(last>=first){
                first = height[++i];
            } else {
                last = height[--j];
            }
            area = max(area, (j-i) * min(first,last));
        }
        return area;
    }
};



int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(40);
    // arr.push_back(4);
    // arr.push_back(30);
    // arr.push_back(3);
    // arr.push_back(7);
    int ans = s.maxArea(arr);
    cout<<ans;
    return 0;
}