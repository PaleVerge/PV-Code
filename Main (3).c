#include <stdio.h>

int main(void){
	int a[101];
	int n,i,count=0;
	double ave,tot;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		tot+=a[i];
	}
	ave=tot/n;
	for(i=0;i<n;i++){
		if(a[i]<=ave){
			count++;
		}
	}
	printf("%.2f %d",ave,count);
	return 0;
}
