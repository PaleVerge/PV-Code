#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(void){
	char a[21];
	int count=0;
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	for(int i=0;a[i]!='\0';i++){
		if(toupper(a[i])=='A' || toupper(a[i])=='E' ||toupper(a[i])=='I' ||toupper(a[i])=='O' || toupper(a[i])=='U'){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
