//
// Created by whip on 2026/6/25.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool ishw(string s){
    string tmp=s;
    reverse(s.begin(),s.end());
    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(tmp.begin(),tmp.end(),tmp.begin(),::toupper);
    return tmp==s?true:false;
}
int main(){
    string s;
    getline(cin,s);
    cout<<(ishw(s)?"true":"false")<<endl;

    return 0;
}