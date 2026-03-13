#include <stdio.h>
int main(void){
	FILE * fp;
	char ch;
	fp=fopen("student.txt","a");
	while((ch=getchar())!=EOF){
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}
