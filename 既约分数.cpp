//
// Created by ritno on 2026/3/19.
//
#include <iostream>
#include <algorithm>
using namespace std;
int ans=0;
int main(){
    for (int i=1;i<=2020;i++){
        for (int j=1;j<=2020;j++){
            if (__gcd(i,j)==1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}