#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,* p,count;
	while(scanf("%d",&n)!=EOF){
		count=0;
		p=(int *)calloc(n,sizeof(int));
		
		for(int i=0;i<n;i++){
			scanf("%d",p+i);
		}
		
		for(int i=0;i<n;i++){
			if(*(p+i) < 60){
				count++;
			}
		}
		free(p);
		printf("%d\n",count);
	}
	return 0;
}
