#include<iostream>
#include <iterator>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp, j=0;

        for(int i =0; i < n; i++){
            nums1[m+i] = nums2[i];
        }
        std::sort(nums2.begin(),nums2.end());
        for(int i=0; i<m+n; i++){
        cout<<nums1[i];
        }
    }
};

int main(){
Solution s;
vector<int> nums1, nums2; 
nums1.push_back(1);
nums1.push_back(2);
nums1.push_back(2);
nums1.push_back(3);
nums1.push_back(-1);
nums1.push_back(-1);
nums2.push_back(1);
nums2.push_back(2);
nums2.push_back(3);

s.merge(nums1,4,nums2,3);
return 0;
}