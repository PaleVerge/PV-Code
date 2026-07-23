//
// Created by whip on 2026/7/19.
//
#include <iostream>

using namespace std;

int main(){
    int t;cin>>t;
    while (t--){
         int n;cin>>n;
        int a[n+1];
        for (int i=1;i<=n;i++){
            cin>>a[i];
        }
        int max_len=0;
        for (int i=1;i<=n;i++){
            int len=0;
            int k=1;
            for (int j=i;j<=n;j++){
                if (a[j]%k==0){
                    len++;
                    k++;
                }
            }
            if (len>max_len){
                max_len=len;
            }
        }
        cout<<max_len<<'\n';
    }

    return 0;
}