#include <stdio.h>
int main(void){
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	printf("%d %d %d",min,a+b+c-min-max,max);
	return 0;
}
