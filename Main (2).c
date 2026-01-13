#include <stdio.h>

int main(void){
	double res=1.00;
	int n,i;
	scanf("%d",&n);
	if(n==0){
		printf("%.2f",0.00);	
	}else if(n==1){
		printf("%.2f",1.00);
	}else{
		for(i=2;i<=n;i++){
			int son=2*i-3;
			int mom=2*i-2;
			if(i%2==0){
				res+=(double)son/mom;	
			}
			if(i%2!=0){
				res-=(double)son/mom;
			}
		}
		printf("%.2f",res);	
	}
	return 0;
}
