#include<stdio.h>
#include<string.h>

int main(void){
	char a[101];

	while(fgets(a,sizeof(a),stdin)){
		int flag[256]={0};
		a[strcspn(a,"\n")]='\0';
		for(int i=0;a[i]!='\0';i++){
			if(flag[(int)a[i]]==0){
				printf("%c",a[i]);
				flag[(int)a[i]]=1;
			}
		}
		putchar('\n');
	}
	
	return 0;
}
