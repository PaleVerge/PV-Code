#include<stdio.h>
int main(void){
	int n,max,index=0;
	scanf("%d",&n);
	int a[20];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];;
			index=i;
		}
	}
	printf("%d %d",max,index);
	return 0;
}
