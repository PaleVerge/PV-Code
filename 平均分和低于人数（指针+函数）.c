#include <stdio.h>
#include <stdlib.h>
double average(double score[],int n,int *count){
	double sum=0,ave;
	int i;
	for(i=0;i<n;i++){
		sum+=*(score+i);
	}
	ave=sum/n;
	*count=0;
	for(i=0;i<n;i++){
		if(*(score+i)<ave){
			(*count)++;
		}
	}
	return ave;
}
int main(void){
	int n,* num,numm,i;
	num=&numm;
	double ave,* score;
	while(scanf("%d",&n)!=EOF){
		score=(double *)calloc(n,sizeof(double));
		for(i=0;i<n;i++){
			scanf("%lf",score+i);
		}
		ave=average(score,n,num);
		free(score);
		printf("%.2f %d\n",ave,*num);
	}
	return 0;
}
