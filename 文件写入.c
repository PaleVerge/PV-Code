#include <stdio.h>
int main(void){
	double n;
	FILE * fp;
	fp=fopen("chap12_exercise2.dat","a");
	
	while(scanf("%lf",&n)!=EOF){
		if(n==-1)break;
		fprintf(fp,"%.6f  ",n);
	}
	fclose(fp);
	return 0;
}
