#include <stdio.h>
int main(void){
	int n,a[100001],cur_count=1,max_count=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			cur_count++;
		}else{
			if(cur_count>max_count){
				max_count=cur_count;
			}
			cur_count=1;
		}
	}
	if(cur_count>max_count){
		max_count=cur_count;
	}
	printf("%d",n-max_count);
	return 0;
}
