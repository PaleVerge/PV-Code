#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void swap(int *p1,int *p2){
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}
int main(void){
	int a[100];
	int n,max,min,index_min,index_max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	index_min=0,index_max=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			index_max=i;
		}
		if(a[i]<min){
			min=a[i];
			index_min=i;
		}
	}
	swap(&a[index_min],&a[index_max]);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
