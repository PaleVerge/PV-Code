//
// Created by ritno on 2026/5/9.
//
#include <iostream>
using ll=long long;
ll qmi(ll a,ll b){
    ll ans=1;
    while (b){
        if (b&1){
            ans=ans*a;
        }
        a=a*a,b>>=1;
    }
    return ans;
}
int main(){
    using std::cin,std::cout,std::endl;
    int a,b;
    cout<<"请输入底数和指数:";
    cin>>a>>b;
    cout<<a<<"的"<<b<<"次方为:"<<qmi(a,b)<<endl;
}