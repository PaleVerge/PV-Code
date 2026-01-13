#include<stdio.h>
#include<string.h>

int main(void){
	char a[101];
	int k,m,i;
	
	while(scanf("%d %d",&k,&m)!=EOF){
		getchar();
		fgets(a,sizeof(a),stdin);
		a[strcspn(a,"\n")]='\0';

		if(k+m < (int)strlen(a)){	
			for(i=k;a[i]!='\0';i++){
				a[i]=a[i+m];
			}
			a[i]='\0';
		}else {
			a[k]='\0';
		}
		for(int i=0;a[i]!='\0';i++){
			printf("%c",a[i]);
		}
		putchar('\n');
	}
	
	return 0;
}
