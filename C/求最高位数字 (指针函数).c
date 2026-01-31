#include<stdio.h>
int high(int * p){
	int tmp=*p,res=0;
	while(tmp!=0){
		res=tmp%10;
		tmp/=10;
	}
	return res;
}
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",high(&n));
	}
	return 0;
}

