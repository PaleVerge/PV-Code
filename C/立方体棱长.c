#include <stdio.h>
#include <math.h>

int main(void)
{
	long long ab,bc,ac ;
	scanf("%lld %lld %lld",&ab,&bc,&ac);
	long long abc_2=ab*bc*ac;
	long long abc = sqrt(abc_2);
	double a=abc/bc;	
	double b=abc/ac;
	double c=abc/ab;
	int C=4*a+4*b+4*c;
	printf("%d",C);
	return 0;
}