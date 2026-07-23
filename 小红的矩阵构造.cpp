//
// Created by whip on 2026/7/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    if (n==1&&m==1){
        cout<<1;
    }else if (n>1&&m>1){
        cout<<-1;
    }else if (m==1&&n>1){
        cout<<0<<'\n';
        for (int i=1;i<n;i++){
            cout<<1<<'\n';
        }
    }else{
        cout<<0;
        for (int i=1;i<m;i++){
            cout<<1;
        }
    }
    return 0;
}
