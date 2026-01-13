#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int inte;
double sma;
void cal(double a){
	inte=(int)a;
	sma=a-inte;
}
int main(void){
	double a;
	while(scanf("%lf",&a)!=EOF){
		cal(a);
		printf("%d %f\n",inte,sma);
	}
	
	return 0;
}
