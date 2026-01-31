#include<stdio.h>

int main(void){
	int i,j,t;
	int res;
	int row,col;
	int a[10][10];
	
	scanf("%d",&t);
	while(t>0){
		res=0;
		scanf("%d%d",&row,&col);
		
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				scanf("%d",&a[i][j]);
			}
		}	
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				if(i==0 || i==row-1 ||j==0 ||j==col-1){
					res+=a[i][j];
				}
			}
		}	
		printf("%d\n",res);
		t--;
	}
	return 0;
}
