#include<stdio.h>

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n>=10){
			n/=10;
		}
		printf("%d\n",n);
	}
	return 0;
}
