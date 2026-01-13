#include <stdio.h>
#include <ctype.h>
int main(void){
	char a;
	scanf("%c",&a);
	if(isdigit(a)){
		printf("digital");
	}else if(isalpha(a)){
		if(a>='A' && a<='Z'){
			printf("capital letter");
		}else{
			printf("small letter");
		}
	}else{
		printf("other");
	}
	return 0;
}
