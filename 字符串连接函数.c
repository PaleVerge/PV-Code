#include<stdio.h>
#include<string.h>
int main(void){
	char a[101],b[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	fgets(b,sizeof(b),stdin);
	b[strcspn(b,"\n")]='\0';
	for(int i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	for(int i=0;a[i]!='\0';i++){
		printf("%c",b[i]);
	}
	return 0;
}
