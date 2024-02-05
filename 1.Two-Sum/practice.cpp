#include<iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    std::map<string,int> map;
    map["one"] = 1;
    map["two"] = 2;

    std::map<string, int>::iterator it = map.begin();

    while(it !=map.end()){
        cout<<"Key: " << it->first <<cout << ", Value: "<< it->second<<endl;
        ++it;
    }
    cout<<"Size: "<<map.size();

    return 0;
}