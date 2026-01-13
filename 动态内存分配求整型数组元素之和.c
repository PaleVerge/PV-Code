#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int n,tot=0;
	scanf("%d",&n);
	int *a =(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		tot+=*(a+i);
	}
	printf("%d",tot);
	return 0;
}
