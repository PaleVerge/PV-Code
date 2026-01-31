#include <stdio.h>

int main() {
	char m;
	while (scanf("%c", &m) == 1) {
		if (m >= '0' && m <= '9') {  // 只处理数字
			printf("%c ", m);
		} else {
			break;  // 遇到非数字（如换行符）则结束
		}
	}
	printf("\n");
	return 0;
}
