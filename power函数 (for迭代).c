#include<stdio.h>
int power(int x,int y){
	int res=1;
	for(int i=0;i<y;i++){
		res*=x;
	}
	return res;
}

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",power(a,b));
	return 0;
}
