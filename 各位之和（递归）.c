#include<stdio.h>
int res=0;
int sum(int n){
	res+=n%10;
	if(n==0){
		return res+n;
	}
	return sum(n/10);
}
int main(void){
	int n;
	
	while(scanf("%d",&n)!=EOF){
		res=0;
		printf("%d\n",sum(n));
	}
	return 0;
}

