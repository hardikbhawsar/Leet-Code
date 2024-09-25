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

/*  This solution is good too! Just one for loop ~~~~~

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            }
            else if (counting) {
                break;
            }
        }
        
        return length;
    }
};
*/