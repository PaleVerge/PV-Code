#include <stdio.h>
int main(void){
	int a,b;
	scanf ("%d %d",&a,&b);
	printf("%d %d %.2f",a/b,a%b,(float)a/b);
	return 0;
}
