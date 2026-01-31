#include <stdio.h>
#include <ctype.h> 

int main() {
	char sentence[101]; 
	int i,first; 
	
	while(fgets(sentence,101,stdin)!=NULL) {
		first=1; 
		i=0;
	
		while(sentence[i]!='\0') {
			if(sentence[i]==' '||sentence[i]=='\t') {
				first=1;
			} 
			else if(isalpha(sentence[i])&&first) {
				sentence[i]=toupper(sentence[i]);  
				first=0;  
			} 
			else{
				first=0;
			}
			i++;
		}
		printf("%s",sentence);
	}
	return 0;
}
