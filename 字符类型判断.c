#include <stdio.h>
#include<ctype.h>
int main(void){
	char a;
	scanf("%c",&a);
	if(isalpha(a)){
		if(a>='A' && a<='Z')
			printf("upper\n");
		else
			printf("lower");
	}else if(isdigit(a)){
		printf("digit\n");
	}else{
		printf("other\n");
	}
	return 0;
}
