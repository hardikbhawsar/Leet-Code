#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length()-1, count = 0;
        while(s[end] == ' '){
            end--;
        }
        int start = end;
        while(s[start]!=' '){
            count++;
            start--;
        }
        return count;
    }
};

int main(){
Solution s;
string str = "Hello World  ";
int ans = s.lengthOfLastWord(str);
cout<< ans;
return 0;
}