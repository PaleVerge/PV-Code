//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> name;
    int n;cin>>n;
    while (n--){
        string s;cin>>s;
        name.push_back(s);
    }
    sort(name.begin(),name.end());
    for (int i=0;i<name.size();++i){
        cout<<((i==name.size()-1)?name[i]:name[i]+",");
    }
    return 0;
}