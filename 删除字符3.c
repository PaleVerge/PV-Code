#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
	char a;
	while(scanf("%c",&a)!=EOF){
		if(isdigit(a)){
			putchar('0'+'9'-a);
		}else{
			putchar(a);
		}
	}
	return 0;
}
