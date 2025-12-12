#include<stdio.h>
double max,min;
void maxmin(double score[],int n){
	int i;
	max=min=score[0];
	for(i=1;i<n;i++){
		if(max<score[i]){
			max=score[i];
		}
		if(min>score[i]){
			min=score[i];
		}
	}
}
int main(void){
	int n,i;
	double score[101];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%lf",&score[i]);
		}
		maxmin(score,n);
		printf("%.2f %.2f\n",max,min);
	}
	
	return 0;
}
