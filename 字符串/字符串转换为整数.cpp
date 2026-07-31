//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int tot=0;
    int n=1;
    for (int i=s.size()-1;i>=0;--i){
        if (!isdigit(s[i])){
            cout<<"error";
            return 0;
        }
        tot+=n*(s[i]-'0');
        n*=10;
    }
    cout<<tot+1;
    return 0;
}
