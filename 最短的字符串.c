#include <stdio.h>
#include <string.h>
char * sfgets(char * st,int n);

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
			sfgets(str[i],101);
		}
		int min_len=strlen(str[0]);
		for(int i=0;i<n;i++){
			int cur_len=strlen(str[i]);
			if(cur_len<=min_len){
				min_len=cur_len;
				strcpy(min,str[i]);
			}
		}
		printf("%s\n",min);
	}
	return 0;
}
char * sfgets(char * st,int n){
	char * rt_val=fgets(st,n,stdin);
	char * find;
	if(rt_val){
		find=strchr(st,'\n');
		if(find){
			*find='\0';
		}
	}
	return rt_val;
}
