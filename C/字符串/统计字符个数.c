#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void){
	int up=0,low=0,digit=0,bs=0,other=0;
	char a[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	for(int i=0;a[i]!='\0';i++){
		if(isdigit(a[i])){
			digit++;
		}else if(isalpha(a[i])){
			if(a[i] >= 'A' && a[i]<='Z'){
				up++;
			}else{
				low++;
			}
		}else if(a[i]==' '){
			bs++;
		}else{
			other++;
		}
	}
	printf("%d %d %d %d %d",up,low,digit,bs,other);
	return 0;
}
