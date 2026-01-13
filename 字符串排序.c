#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	char a[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	int n=(int)strlen(a);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	puts(a);
	return 0;
}

