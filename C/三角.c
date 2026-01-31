#include <stdio.h>
#define MOD 1000000007

int main(void) {
	long long n,m;
	scanf("%lld %lld",&n,&m);
	
	long long a=(n-1)%MOD;
	long long b=(m-1)%MOD;
	long long c=(n+m-4)%MOD;
	
	
	if (c<0) {
		c=c+MOD;
	}
	
	long long result = (2 * a) % MOD;
	result=(result*b)%MOD;
	result=(result*c)%MOD;
	
	printf("%lld\n",result);
	
	return 0;
}

