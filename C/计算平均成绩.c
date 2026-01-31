#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
double ave(int *a,int n){
	double tot=0;
	for(int i=0;i<n;i++){
		tot+=*(a+i);
	}
	double ave=tot/n;
	return ave;
}
int main(void){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%.4f",ave(a,n));
	
	return 0;
}
