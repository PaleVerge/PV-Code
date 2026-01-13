#include <stdio.h>
int main(void){
	int n;
	int a[10][10];
	int flag=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=a[j][i]){
				flag=0;
			}
		}
	}
	if(flag){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}
