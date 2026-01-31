#include<stdio.h>
void itflot(double n,int * itp,double * flotp){
	*itp=n/1;
	*flotp=n-*itp;
}
int main(void){
	double n,flot;
	int it;
	
	while(scanf("%lf",&n)!=EOF){
		itflot(n,&it,&flot);
		printf("%d %.6f\n",it,flot);
	}
	
	return 0;
}
