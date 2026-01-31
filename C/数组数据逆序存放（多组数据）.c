#include<stdio.h>
int main(void){
	int a[20];
	int x,n,t,i,count;
	scanf("%d",&t);
	while(t>0){
		scanf("%d",&n);
		count=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(i=0;i<n;i++){
			if(x==a[i]){
				count+=1;
			}
		}
		if(count!=0){
			printf("find!\n");
		}else{
			printf("no find!\n");
		}
		t--;
	}
	
	
	return 0;
}
