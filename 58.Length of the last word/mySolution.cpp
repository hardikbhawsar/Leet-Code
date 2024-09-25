#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag=false;
        for(int i=0; i < s.length(); i++){
            if(s[i] != ' ' &&  flag == true){
                count = 1;
                flag = false;
            }
            else if (s[i] != ' ') {
                count++;  
            }
            else{
                flag = true;
            }
        }
        return count;
    }
};

int main(){
Solution s;
string str = "Hello World";
int ans = s.lengthOfLastWord(str);
cout<< ans;
return 0;
}