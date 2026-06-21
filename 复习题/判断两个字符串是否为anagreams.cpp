//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if (s1.size()!=s2.size()){
        cout<<"no";
        return 0;
    }
    for (int i=0;i<s1.size();++i){
        size_t pos=s2.find(s1[i]);
        if (pos==string::npos){
            cout<<"no";
            return 0;
        }
        s2.erase(pos,1);
    }
    cout<<"yes";
    return 0;
}