/*【问题描述】输入一个字符，判断字符的类型。如果输入字符为英文字母字符，再判断是否大小写，如果是大写字母，则输出“capital letter”，否则输出“small letter”，如果输入字符为为数字字符，则输出“digital”，否则输出“other”。
【输入形式】输入一个字符
【输出形式】输出判断结果
【样例输入】D
【样例输出】capital letter
【样例输入】5
【样例输出】digital
【样例输入】a
【样例输出】small letter
【样例输入】*
【样例输出】other*/
#include <stdio.h>
#include <ctype.h>
int main(void){
	char a;
	scanf("%c",&a);
	if(isdigit(a)){
		printf("digital");
	}else if(isalpha(a)){
		if(a>='A' && a<='Z'){
			printf("capital letter");
		}else{
			printf("small letter");
		}
	}else{
		printf("other");
	}
	return 0;
}
