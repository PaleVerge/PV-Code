#include <stdio.h>
#include <math.h>
#define M 6e24
#define R 6.371e6
#define G 6.67e-11

int main(void){
	const double PI=4.0*atan(1.0);
	long double h;
	long long int t;
	scanf("%lld",&t);
	
	h=cbrt((G*M*t*t)/(4*PI*PI))-R;
	printf("%.0Lf",h);
	
	return 0;
}
