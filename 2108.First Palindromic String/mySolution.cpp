#include <climits>
#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string temp;
        bool flag = false;
        for(int i =0; i< words.size();i++){
            temp = words[i];
            for(int j=0; j < words[i].size(); j++){
                if(temp[j]!= temp[temp.size()-j-1]){
                    flag = false;
                    break;
                }
                else {
                    flag = true;
                }                
            }
            if(flag){            
                return temp;
            }
        }
        return "";
    }
};



int main(){
Solution s;
vector<string> words; 
words.push_back("abc");
words.push_back("car");
words.push_back("ada");
words.push_back("racecar");
words.push_back("cool");
string ans = s.firstPalindrome(words);
cout<< ans;
return 0;
}