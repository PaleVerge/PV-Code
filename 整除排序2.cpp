//
// Created by whip on 2026/7/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> dp(n+1,0);
        for(int i=0;i<n;i++){
            vector<int> b;
            for(int j=1;j*j<=a[i];j++){
                if(a[i]%j==0){
                    if(j<=n)b.push_back(j);
                    if(a[i]/j!=j && a[i]/j<=n)
                        b.push_back(a[i]/j);
                }
            }

            sort(b.begin(),b.end(),greater<int>());

            for(int j:b){
                if(j==1){
                    dp[1]=max(dp[1],1);
                }else if(dp[j-1]>0){
                    dp[j]=max(dp[j],dp[j-1]+1);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,dp[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}