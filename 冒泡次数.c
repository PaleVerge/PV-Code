#include<stdio.h>
int main(void){
	int n,a[20];
	int count =0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				count++;
			}
			
		}
	}
	printf("%d",count);
	return 0;
}
