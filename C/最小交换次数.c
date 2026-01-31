#include <stdio.h>
int main(void){
	int a[1001],count=0;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=i+1){
			for(int j=i;j<n;j++){
				if(a[j]==i+1){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
					count++;
				}
			}
		}
	}
	
	printf("%d",count);
}
