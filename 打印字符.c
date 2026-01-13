#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void repeat(char a,int n){
	for(int i=0;i<n;i++){
		printf("%c",a);
	}
}
int main(void){
	int n;
	char a;
	scanf("%c %d",&a,&n);
	repeat(a,n);
	return 0;
}
