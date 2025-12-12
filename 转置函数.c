#include<stdio.h>
void t(int a[11][11],int b[11][11],int m,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=a[j][i];
		}
	}
}
int main(void){
	int a[11][11],b[11][11],m,n,i,j;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	t(a,b,m,n);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		putchar('\n');
	}
	return 0;
}

