#include<stdio.h>
int main(void){
	int i,j,m,n,t,row,col;
	int a[15][15];
	scanf("%d",&t);
	while(t>0){
		row=0,col=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}	
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[row][col]>a[i][j]){
					row=i;
					col=j;
				}
			}
		}
		printf("%d %d %d\n",a[row][col],row,col);
		t--;
	}
	return 0;
}
