#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int a[10];
	int n,x,count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
