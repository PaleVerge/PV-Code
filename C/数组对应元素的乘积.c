#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int n,a[20],b[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=a[i]*a[n-i-1];
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
