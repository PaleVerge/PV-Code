#include<stdio.h>
#include<stdbool.h>
int main(void){
	int a[110];
	bool flag =false;
	int n,t;
	int i,j;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
					flag=true;
				}
			}
			if(flag==false){
				break;
			}
		}
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		putchar('\n');
	}
	return 0;
}
