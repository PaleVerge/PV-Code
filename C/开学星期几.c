//小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？

#include <stdio.h>

int main() {
	int X, N;
	scanf("%d %d", &X, &N);

	int day = (X-1+N)%7+1;//偏移量,1-7映射到0-6，6%7=6
	printf("%d\n",day);

	return 0;
}
