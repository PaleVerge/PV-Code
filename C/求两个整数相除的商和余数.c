#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void cal(int a,int b,int* p1,int *p2){
	*p1=a/b;
	*p2=a%b;
}
int main(void){
	int a,b,p1,p2;
	scanf("%d %d",&a,&b);
	cal(a,b,&p1,&p2);
	printf("%d %d",p1,p2);
	return 0;
}
