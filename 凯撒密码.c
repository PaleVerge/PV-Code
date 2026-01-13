#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
int main(void){
	char a[21];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]=(a[i]-'A'+2)%26+'A';
		}else if(a[i]>='a' && a[i]<='z'){
			a[i]=(a[i]-'a'+2)%26+'a';
		}
	}
	puts(a);
	return 0;
}
