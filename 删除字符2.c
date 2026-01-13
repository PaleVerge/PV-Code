#include<stdio.h>
#include<string.h>

int main(void){
	char a[101];
	int k,m;
	
	while(scanf("%d %d",&k,&m)!=EOF){
		getchar();
		fgets(a,sizeof(a),stdin);
		a[strcspn(a,"\n")]='\0';
		for(int i=0;i<k;i++){
			printf("%c",a[i]);			
		}
		if(k+m < (int)strlen(a)){	
			for(int i=k+m;a[i]!='\0';i++){
				printf("%c",a[i]);			
			}
		}
		putchar('\n');
	}
	
	return 0;
}
