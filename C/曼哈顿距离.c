#include <stdio.h>
#include <math.h>

int main(void){
	int sx,sy,tx,ty;

	scanf("%d %d %d %d",&sx,&sy,&tx,&ty);
	printf("%d",abs(tx-sx)+abs(ty-sy));

	return 0;
}
