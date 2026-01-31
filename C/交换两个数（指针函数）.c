#include<stdio.h>
void swap(int * a,int * b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(void){
	int a,b,n;
	int * ap=&a,* bp=&b;
	scanf("%d",&n);
	while(n>0){
		scanf("%d %d",ap,bp);
		swap(ap,bp);
		printf("%d %d\n",a,b);
		n--;
	}
	return 0;
}
