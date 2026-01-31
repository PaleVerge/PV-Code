#include<stdio.h>
int main(void){
	int n,a[21],i,* p,max,flag=0;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		max=a[0];
		for(p=a;p<a+n;p++){
			if(max<*p){
				max=*p;
				flag=(int)(p-a);
			}
			
		}
		printf("%d %d\n",max,flag);
	}
	return 0;
}
