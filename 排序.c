#include<stdio.h>
#define N 10

void sort(int a[],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
			
		}
	}
}
int main(void){
	int a[10];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sort(a,N);
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
