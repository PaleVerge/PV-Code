#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,cir,aera,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b<=c || a+c<=b || b+c<=a || a<=0 || b<=0 || c<=0){
		printf("No");
	}else{
		cir=a+b+c;
		p=cir/2.0;
		aera=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f",aera);
	}
	
	return 0;
}
