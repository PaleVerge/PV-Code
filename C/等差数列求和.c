#include<stdio.h>
int main(void){
	int n,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		while(n>0){
			sum+=n;
			n--;
		}
		printf("%d\n\n",sum);
	}
	
	return 0;
}
