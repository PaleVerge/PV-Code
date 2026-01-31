#include<stdio.h>
int main(void){
	char ch;
	scanf("%c",&ch);
	if(ch=='a'){
		printf("apple");
	}else if(ch=='b'){
		printf("banana");
	}else if(ch=='c'){
		printf("cat");
	}else{
		printf("no");
	}
	return 0;
}
