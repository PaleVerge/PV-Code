//
// Created by whip on 2026/5/27.
//
#include <iostream>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    for (int i=0;i<s1.size();++i){
        if (s2.find(s1[i])==string::npos){
            cout<<"no";
            return 0;
        }
        s2.erase(s2.find(s1[i]),1);
        cout<<s2<<endl;
    }
    if (s2.empty()){
        cout<<"yes";
    }
    return 0;
}