/*【问题描述】编写函数 void RightMove(char *s,int n)，实现将一个字符串中的所有字符向右移动 n 个位置(n>=0, n<=字符串长度)，而后面 n 个字符移动到字符串的前面，输出移动后的字符串
【输入形式】输入有2行，第1行输入一个字符串（长度小于80），第2行输入一个整数n
【输出形式】输出只有一行，输出向左移动n个位置后的字符串【样例输入】

abcdefgh

3
【样例输出】

fghabcde*/
#include <stdio.h>
#include <string.h>
void RightMove(char *s,int n){
	char c[81];
	int i;
	int len=strlen(s);
	strcpy(c,s);
	for(i=0;i<n;i++){
		s[i]=c[i+len-n];
	}
	for(i=n;i<len;i++){
		s[i]=c[i-n];
	}
}
int main(void){
	char s[81];
	int n;
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")]='\0';
	scanf("%d",&n);
	RightMove(s,n);
	printf("%s",s);
	return 0;
}

