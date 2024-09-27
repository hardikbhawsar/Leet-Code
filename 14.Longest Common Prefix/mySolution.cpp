/*
Time Complexity: O(nlogn)

FAQ: 
Time complexity of sort() funtion is nlogn. 
It used a combination of quick sort, selection sort and heap sort. Optimized. 
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int end = strs.size();
        sort(strs.begin(), strs.end());     // sort has nlogn time complexity
        string first = strs[0], last = strs[end-1];
        for(int i=0; i< min(first.size(),last.size()); i++){
            if(first[i] != last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

int main(){
Solution s;
vector<string> words; 
words.push_back("flow");
words.push_back("flight");
words.push_back("flower");
words.push_back("flag");
string ans = s.longestCommonPrefix(words);
cout<< ans;
return 0;
}