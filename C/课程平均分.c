#include<stdio.h>

int main(void){
	long long id;
	double score[8];
	double tot=0;
	scanf("%lld",&id);
	for(int i=0;i<8;i++){
		scanf("%lf",&score[i]);
		tot+=score[i];
	}
	double ave=tot/8;
	printf("%lld %.3f",id,ave);
	return 0;
}
