#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void swap(int *p1,int *p2){
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}
int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
