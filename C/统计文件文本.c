#include <stdio.h>
#include <ctype.h>

int main(void){
	FILE * fp;
	char ch;
	int count_char=0;
	int count_digit=0;
	
	fp=fopen("chap12_exercise1.dat","r");
	while((ch=fgetc(fp))!=EOF){
		if(isdigit(ch)){
			count_digit++;
		}
		if(isalpha(ch)){
			count_char++;
		}
	}
	printf("The number of the character is %d\n",count_char);
	printf("The number of the number is %d\n",count_digit);
	return 0;
}
