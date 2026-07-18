//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    float tot=0,n=0;
    for (int i=0;i<s.size();++i){
        int j=i+1;
        if (isalpha(s[i]) && isalpha(s[j])){
            tot++;
        }
        if (isalpha(s[i]) && !isalpha(s[j])){
            tot++;
            n++;
        }
    }
    float ave=tot/n;
    cout<<fixed<<setprecision(1)<<ave<<endl;
    return 0;
}