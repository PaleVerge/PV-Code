//
// Created by whip on 2026/6/21.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int a[20];
void search(int n,int s,int &idx){
    for (int i=0;i<n;++i){
        if (a[i]==s){
            idx=i;
            return ;
        }
    }
    idx=-1;
    return ;
}
int main(){
    int n;cin>>n;
    int idx=-1;
    for (int i=0;i<n;++i){
        cin>>a[i];
    }
    int s;cin>>s;
    search(n,s,idx);
    cout<<idx;

}