#include <stdio.h>
int main(void){
	int k;
	double res=0;
	scanf("%d",&k);
	
	for(int n=1;n<=100;n++){
		res=res+1.0/n;
		if(res>=k){
			printf("%d",n);
			break;
		}
	}
	return 0;
}
