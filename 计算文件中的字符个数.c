/*【问题描述】统计一个文本文件中的字符数，文件名为“chap14_file1.txt”
【输入形式】无输入
【输出形式】输出一个整数
【样例输入】

假设文件chap14_file1.txt中内容为：

Hello world

world后无空格，也没有换行

【样例输出】

11
【样例说明】文件中world后无空格，也没有换行*/
#include <stdio.h>

int main(void){
	int count=0;
	char ch;
	FILE * fp;
	fp=fopen("chap14_file1.txt","r");
	while((ch=fgetc(fp))!=EOF){
		count++;
	}
	printf("%d",count);
	return 0;
}
