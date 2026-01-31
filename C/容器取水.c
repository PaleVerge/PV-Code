#include <stdio.h>
long long gcd(long a,long b){
	long long r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(void){
	int n;
	scanf("%d",&n);
	while(n-->0){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a+b>=c && c%gcd(a,b)==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
