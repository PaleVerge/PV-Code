#include<stdio.h>
int main(void){
	double r1,r2,r3;
	double total_r;

	scanf("%lf %lf %lf",&r1,&r2,&r3);

	total_r=r1*r2*r3/(r2*r3+r1*r2+r1*r3);
	printf("%.2lf",total_r);

	return 0;
}
