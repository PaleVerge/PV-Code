#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;
const int N =1e5+9;

ll dp[N];

ll fib(int n){
	if(dp[n])return dp[n]; //带备忘录的递归
	if(n==1 || n==2){ //if(n <= 2){
		return 1;
	}else{
		return dp[n] = fib(n-1)+fib(n-2);
	}
	
}
int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cout<<fib(i)<<endl;
	}
	return 0;
}
