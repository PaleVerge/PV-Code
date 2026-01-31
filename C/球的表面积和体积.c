#include<stdio.h>
int main(void){
	const double PI=3.14159;
	double r;
	scanf("%lf",&r);
	double s=4*PI*r*r;
	double v=(4.0/3.0)*PI*r*r*r;
	printf("%.3f%,%.3f\n",s,v);
}
