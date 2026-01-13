#include <stdio.h>
int gcd(int a,int b){
	while(b!=0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",gcd(a,b),a*b/gcd(a,b));
	return 0;
}
