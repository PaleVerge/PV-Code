#include<stdio.h>
int main(void){
	int n;
	double res=0;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%2 == 0){
			res=res-1.0/i;
		}else{
			res=res+1.0/i;
		}
	}	
	
	printf("%.6f",res);
	return 0;
}
