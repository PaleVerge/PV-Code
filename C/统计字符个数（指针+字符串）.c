#include<stdio.h>
int tsji(char *p,char ch){
	int count=0;
	for(int i=0;*(p+i)!='\0';i++){
		if(*(p+i)==ch){
			count++;
		}
	}
	return count;
}
int main(void){
	char str[200];
	char ch;
	int n;
	scanf("%d",&n);
	getchar();
	while(n-->0){
		fgets(str,sizeof(str),stdin);
		scanf("%c",&ch);
		getchar();
		printf("%d\n",tsji(str,ch));
	}
	return 0;
}
