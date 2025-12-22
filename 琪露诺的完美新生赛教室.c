#include <stdio.h>
int main(void){
	int n,m,count=0;
	scanf("%d",&n);
	while(n-->0){
		scanf("%d",&m);
		count+=m;
	}
	printf("%d",count);
	return 0;
}
