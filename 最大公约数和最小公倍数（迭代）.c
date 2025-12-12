#include <stdio.h>

int gcd(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(void){
	int a,b;
	while(scanf("%d%d",&a,&b)){
		if (a==0 && b==0) {
			break;
		}
		printf("%d %d\n",gcd(a,b),a*b/gcd(a,b));
	}
	return 0;
}
