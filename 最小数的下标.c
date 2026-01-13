#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int min_ind(int a[],int n){
	int min=a[0];
	int index_min=0;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			index_min=i;
		}
	}
	return index_min;
}
int main(void){
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",min_ind(a,n));
	return 0;
}
