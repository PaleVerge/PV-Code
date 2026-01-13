#include <stdio.h>
#include <math.h>
int main(void){
	int a,b,c;
	double p,s;

	scanf("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.3lf",s);

	return 0;
}
	
