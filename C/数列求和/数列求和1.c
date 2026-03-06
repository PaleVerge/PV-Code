#include<stdio.h>
int main(void){
	int n;
	double res=1;
	scanf("%d",&n);
	if(n==0){
		res=0.00;
	}else if(n==1){
		res=1.00;
	}else{
		for(int i=2;i<=2*n-2;i+=2){
			if((i/2)%2 == 0){
				res=res-(1-1.0/i);
			}else{
				res=res+(1-1.0/i);
			}
		}	
	}
	printf("%.2f",res);
	return 0;
}
