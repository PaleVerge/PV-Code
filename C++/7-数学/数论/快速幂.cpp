//
// Created by ritno on 2026/5/9.
//
#include <iostream>
using ll=long long;
ll qmi(ll a,ll b,ll p){
    ll ans=1;
    while (b){
        if (b&1){
            ans=ans*a%p;
        }
        a=a*a%p,b>>=1;
    }
    return ans;
}
int main(){
    using std::cin,std::cout,std::endl;
    int a,b;
    int p=10000;
    cout<<"请输入底数和指数:";
    cin>>a>>b;
    cout<<a<<"的"<<b<<"次方为:"<<qmi(a,b,p)<<endl;
}