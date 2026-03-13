#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void cal(int a,int b,int c,int* max){
	*max=a;
	if(b>*max){
		*max=b;
	}
	if(c>*max){
		*max=c;
	}
}
int main(void){
	int a,b,c,p;
	scanf("%d %d %d",&a,&b,&c);
	cal(a,b,c,&p);
	printf("%d",p);
	return 0;
}
