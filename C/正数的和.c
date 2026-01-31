#include<stdio.h>
int main(void){
	int n,sum=0,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		if(m>0){
			sum+=m;
		}
	}
	printf("%d",sum);
	return 0;
}
