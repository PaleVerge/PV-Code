#include <stdio.h>
#include <string.h>
int main(void){
	int i,j=0;
	char a[10],b[10];

	gets(a);
	gets(b);
	i=strlen(a);
	while(a[i++]=b[j++]);
	puts(a);
	return 0;
}
