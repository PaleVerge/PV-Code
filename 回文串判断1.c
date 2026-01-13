#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
	char s[101];
	int flag=1;
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	int i=0,j=strlen(s)-1;
	while(i<j){
		if(toupper(s[i])!=toupper(s[j])){
			flag=0;	
			break;
		}
		i++;
		j--;
	}
	if(flag){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
