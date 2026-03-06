#include <stdio.h>
#include <string.h>

char * sfgets(char * st,int n);
void cohe(char *st,char *end);

int main(void){
	char st[101],end[101];
	sfgets(st,101);
	sfgets(end,101);
	
	cohe(st,end);
	puts(st);
	
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
void cohe(char *st,char *end){
	char * st_end=st+strlen(st);
	while(*end != '\0'){
		*st_end = *end;
		st_end++;
		end++;
	}
	*st_end = '\0';
}
