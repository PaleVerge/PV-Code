#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(void){
	int n,a[10],n_find,find=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n_find);
	for(int i=0;i<n;i++){
		if(a[i]==n_find){
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
