#include <stdio.h>
#include <math.h>

int main(void){
	const double pi=4*atan(1); 
	double r;
	double cir,aera,sur,v;
	scanf("%lf",&r);
	cir=2*pi*r;
	aera=pi*r*r;
	sur=4*pi*r*r;
	v=4.0/3*pi*pow(r,3);
	printf("%.2f\n%.2f\n%.2f\n%.2f",cir,aera,sur,v);
	return 0;
}
