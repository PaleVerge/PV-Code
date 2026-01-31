#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	char a[101];
	int n=1,res=0;
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	for(int i=strlen(a)-1;i>=0;i--){
		if(isdigit(a[i])){
			res+=n*(a[i]-'0');
			n*=10;
		}
	}
	printf("%d",res);
	return 0;
}
