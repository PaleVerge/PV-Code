#include<stdio.h>
int main(void){
	int i,j,n;
	int flag;
	int a[10][10];
		flag=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}	
	
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i][j]==a[j][i]){
					flag++;	
				}
			}
		}
		if(flag==n*n){
			printf("Yes");
		}else{
			printf("No");	
		}
	return 0;
}
