#include<stdio.h>
#include<string.h>

int main(void){
	int final_sum,current_sum;
	long long initial_sum;
	char s[1010];
	while (scanf("%s", s)!=EOF){
		if(strcmp(s,"0")==0){
			break;
		}
		initial_sum=0;

		for (int i=0;s[i]!='\0';i++){
			initial_sum+=s[i]-'0';
		}
		final_sum=(int)initial_sum;

		while(final_sum>=10) {
			current_sum=0;
			int temp_sum=final_sum;

			while (temp_sum > 0) {
				current_sum += temp_sum % 10;
				temp_sum /= 10;
			}
			final_sum=current_sum;
		}
		printf("%d\n",final_sum);
	}

	return 0;
}
