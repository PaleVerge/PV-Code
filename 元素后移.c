#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int m,n;
	scanf("%d %d",&m,&n);
	int *a=(int*)malloc(m*sizeof(int));
	for(int i=0;i<m;i++){
		scanf("%d",a+i);
	}
	int tmp=*(a+n);
	for(int i=n;i<m-1;i++){
		*(a+i)=*(a+1+i);
	}
	*(a+m-1)=tmp;
	for(int i=0;i<m;i++){
		printf("%d ",*(a+i));
	}
	free(a);
	return 0;
}
