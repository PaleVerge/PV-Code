#include<stdio.h>
#define ROW 4
#define COL 4
int main(void){
	int i,j,t;
	int a[ROW][COL];
	scanf("%d",&t);
	while(t>0){
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				scanf("%d",&a[i][j]);
			}
		}	
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
		t--;
	}
	return 0;
}
