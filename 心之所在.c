#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,a[1001],flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			flag=1;
		}
	}

	if(flag==1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
}
