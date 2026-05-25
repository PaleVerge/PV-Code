#include <bits/stdc++.h>
using namespace std;
const int N=1e2+7;
int cnt[N];

int main(){
	for(int i=1;i<=100;++i){
		int x=i;
		for(int j=2;j*j<=i;++j){
			if(x%j==0){	//如果j是约数 
				while(x%j==0){//把约数j除掉 
					x/=j;
					cnt[j]++;	//约数j个数++ 
				}
			}
		}
		if(x>1)cnt[x]++;//剩余的x若大于1，则是一个质因子，++ 
	}	
	long long ans=1;
	for(int i=1;i<=100;++i){	//遍历所有的质因子 
		if(cnt[i])//只看有次数的质因子 
		ans*=(cnt[i]+1);
	}
	cout<<ans<<endl;
	return 0;
}
