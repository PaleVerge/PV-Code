#include <stdio.h>
#include <string.h>

//输入定长字符串
char * 3in1_gets(char * str,int n){
	char * rt_str=fgets(str,n,stdin);
	char * address_n;
	
	if(rt_str){
		address_n=strchr(str,'\n');
		//清除换行符
		if(address_n)
			*address_n='\0';
		//字符串超过长度->清空缓冲区
		else{
			int hcq;
			while ((hcq=getchar())!='\n' && hcq!=EOF)
				continue;
		}
	}
	return rt_str;
}

int main(void){
////////////////////////////////////////////	
	char str[20];
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
//////////////////////////////////////////
	size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
///////////////////////////////////////////
	scanf("%[^\n]", str); // 读取直到遇到换行符，并将换行符留在缓冲区
	getchar();
	//原理：%[^\n] 告诉 scanf：“读取除了换行符以外的所有内容”。
	//风险：溢出风险：如果不写成 %19[^\n]（假设数组大小 20），很容易导致内存溢出。
	//空输入崩溃：如果用户第一下就按回车，scanf 会因为匹配失败直接返回，而不给 str 赋值，甚至可能导致程序逻辑死循环。
	
}
