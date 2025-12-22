#include <stdio.h>
#include <string.h>
char * sfgets(char * st,int n);
int main(void){
	char a[101];
	sfgets(a,101);
	puts(a);
	return 0;
}
char * sfgets(char * st,int n){
	char * rt_val=fgets(st,n,stdin);
	char * find;
	if(rt_val){
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while (getchar() != '\n' && getchar() != EOF)
				continue;
	}
	return rt_val;
}
