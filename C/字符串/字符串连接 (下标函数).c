#include<stdio.h>
#include<string.h>
char* my_strcat(char* dest, const char* src) {
	int i = 0, j = 0;
	// 1. 找到 dest 的末尾 ('\0' 的位置)
	while (dest[i] != '\0') {
		i++;
	}
	// 2. 开始将 src 复制到 dest 的末尾
	while (src[j] != '\0') {
		dest[i++] = src[j++];
	}
	// 3. 在最后添加字符串结束符
	dest[i] = '\0';

	return dest;
}
int main(void){
	char a[101],b[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	fgets(b,sizeof(b),stdin);
	b[strcspn(b,"\n")]='\0';
	strcat(a,b);
	for (int i=0;a[i]!='\0';i++) {
		printf("%c",a[i]);
	}
	return 0;
}

