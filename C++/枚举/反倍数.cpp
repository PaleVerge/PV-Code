#include<bits.stdc++.h>

using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    int ans=0;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i%a==0||i%b==0||i%c==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}