#include<stdio.h>
int main(void){
	int a[110];
	int n,t;
	while(scanf("%d",&n)!=EOF){
		scanf("%d",&a[0]);
		t=a[0];
		for(int i=1;i<n;i++){
			scanf("%d",&a[i]);
			if(t>a[i]){
				t=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(t==a[i]){
				printf("%d\n",i);
			}
		}
	}

	
	return 0;
}
