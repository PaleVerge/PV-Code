#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int n;
	int *a;
	while(scanf("%d",&n)!=EOF){
		a =(int *)malloc(n*sizeof(int));
		if(a==NULL)return 1;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]<60){
				printf("%d ",a[i]);
			}
		}
		putchar('\n');
		free(a);
	}
	
	return 0;
}
