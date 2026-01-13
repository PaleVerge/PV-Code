#include <stdio.h>
#include <string.h>

int main() {
	char s[20]; 
	scanf("%s", s); // 直接以字符串形式读取输入
	
	for (int i = 0; i < strlen(s); i++) {
		printf("%c ", s[i]);
	}
	printf("\n");
	
	return 0;
}
