#include <stdio.h>
int main(void){
	int n,a[100],find_n,find=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&find_n);
	for(int i=0;i<n-1;i++){
		if(i==find_n){
			find=1;
		}
	}
	if(find){
		printf("find!");
	}else{
		printf("no find!");
	}
	return 0;
}
