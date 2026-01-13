#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void upr(char a[]){
	for(int i=0;a[i]!='\0';i++){
		if(isalpha(a[i])){
			if(a[i]>='a' && a[i]<='z'){
				a[i]=toupper(a[i]);
			}
		}
	}
}
int main(void){
	char a[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	upr(a);
	puts(a);
	return 0;
}
