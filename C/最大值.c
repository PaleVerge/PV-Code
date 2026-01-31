#include <stdio.h>
int main(void){
	int max,n;
	scanf("%d",&n);
	max=n;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		if(n>max){
			max=n;
		}
	}
	printf("%d",max);
	return 0;
}
