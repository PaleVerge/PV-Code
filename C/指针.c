#include<stdio.h>

int main(void){
	int a,*p;
	scanf("%d",&a);
	p=&a;
	printf("%d %d %d %d %d",a,&a,p,*p,&p);
	return 0;
}

