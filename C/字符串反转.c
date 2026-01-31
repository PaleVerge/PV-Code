#include<stdio.h>
#define N 5

void rev(int *a,int n){
	int *left=a,*right=a+n-1;
	int tmp;
	
	for(;left<right;left++,right--){
		tmp=*left;
		*left=*right;
		*right=tmp;
	}
}
int main(void){
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	rev(a,N);
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
