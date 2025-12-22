#include <stdio.h>

void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main(void){
	int a[101],n;
	scanf("%d",&n);
	if(n==0){
		printf("No Data\n");
	}else{
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		bubblesort(a,n);
		int first=1;
		for(int i=n-1;i>=0;i--){
			if(a[i]%2!=0){
				if(first){
					printf("%d",a[i]);
					first=0;
				}else{
					printf("% d",a[i]);
				}
				
			}
		}
		for(int i=1;i<n;i++){
			if(a[i]%2==0){
				if(first){
					printf("%d",a[i]);
					first=0;
				}else{
					printf("% d",a[i]);
				}
			}
		}
	}

	return 0;
}
