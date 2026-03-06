#include <stdio.h>
#include <string.h>

int main(void){
	int t;
	scanf("%d",&t);
	getchar();
	
	while(t-->0){
		int n;
		scanf("%d",&n);
		getchar();
		
		char str[10][101],min[101];
		
		for(int i=0;i<n;i++){
			fgets(str[i],sizeof(str),stdin);
			str[i][strcspn(str[i],"\n")]='\0';
		}
		int min_len=strlen(str[0]);
		for(int i=0;i<n;i++){
			if(strlen(str[i])<=min_len){
				min_len=strlen(str[i]);
				strcpy(min,str[i]);
			}
		}
		printf("%s\n",min);
	}
	return 0;
}

