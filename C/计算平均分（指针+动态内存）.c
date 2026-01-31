#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,* p;
	double ave,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		p=(int *)calloc(n,sizeof(int));
		
		for(int i=0;i<n;i++){
			scanf("%d",p+i);
		}
		for(int i=0;i<n;i++){
			sum+=*(p+i);
		}
		ave=sum/n;
		
		free(p);
		printf("%.4f\n",ave);
	}
	return 0;
}
