#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int a[10],tmp[10];
	int n;
	
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		tmp[i]=a[10-n+i];
	}
	for(int i=0;i<10-n;i++){
		tmp[n+i]=a[i];
	}
	for(int i=0;i<10;i++){
		a[i]=tmp[i];
	}
	
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
