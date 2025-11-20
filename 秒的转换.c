#include <stdio.h>
int main(void){
	int n;
	int d,h,m,s;
	scanf("%d",&n);
	d=n/(3600*24);
	h=n%(3600*24)/(3600);
	m=n%(3600*24)%(3600)/(60);
	s=n%(3600*24)%(3600)%(60);
	printf("%0d %02d:%02d:%02d",d,h,m,s);
	return 0;
}
