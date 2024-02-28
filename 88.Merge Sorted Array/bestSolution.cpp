#include<iostream>
#include <iterator>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
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

