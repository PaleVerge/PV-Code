#include <stdio.h>
#include <math.h>
int main(void){
	int moon;
	double money,rate,res;
	scanf("%lf %d",&money,&moon);
	if(moon<=12){
		rate=0.9/100;
	}else{
		if(moon<=24){
			rate=1.0/100;
		}else{
			if(moon<=36){
				rate=1.11/100;
			}else{
				rate=1.2/100;
			}
		}
	}
	res=money*pow(1+rate,moon);
	printf("%.2lf",res);
	return 0;
}
