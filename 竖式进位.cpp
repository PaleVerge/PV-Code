//
// Created by whip on 2026/7/19.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1,s2;cin>>s1>>s2;

    int p1=s1.find('.');
    int p2=s2.find('.');

    string zs1=s1.substr(0,p1);
    string xs1=s1.substr(p1+1);
    string zs2=s2.substr(0,p2);
    string xs2=s2.substr(p2+1);

    int max_len=max(xs1.length(),xs2.length());
    while(xs1.length()<max_len)
        xs1+='0';
    while(xs2.length()<max_len)
        xs2+='0';

    max_len=max(zs1.length(),zs2.length());
    while(zs1.length()<max_len)zs1='0'+zs1;
    while(zs2.length()<max_len)zs2='0'+zs2;

    string str1=zs1+xs1;
    string str2=zs2+xs2;

    int res=0;
    bool carry=false;

    for(int i=str1.length()-1;i>=0;--i){
        int n1=str1[i]-'0';
        int n2=str2[i]-'0';

        if(n1+n2+carry>=10){
            res++;
            carry=true;
        }else{
            carry=false;
        }
    }

    cout<<res<<endl;

    return 0;
}