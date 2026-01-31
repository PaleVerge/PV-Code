#include<stdio.h>
#include<string.h>

int main(void){
	int final,current;
	long long initial;
	char s[10000];
	while (scanf("%s", s)!=EOF){
		if(strcmp(s,"0")==0){
			break;
		}
		initial=0;

		for (int i=0;s[i]!='\0';i++){
			initial+=s[i]-'0';
		}
		final=(int)initial;

		while(final>=10) {
			current=0;
			int temp=final;

			while (temp > 0) {
				current += temp % 10;
				temp /= 10;
			}
			final=current;
		}
		printf("%d\n",final);
	}

	return 0;
}
