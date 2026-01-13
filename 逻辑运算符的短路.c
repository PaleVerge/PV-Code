#include <stdio.h>

int main(void) {
	char momreply, yourreply;
	
	printf("出去吃饭吗（输入'Y'/'N'）\n");
	printf("妈妈的意见: ");
	scanf(" %c", &momreply); 
	if(momreply == 'Y'){
		if(momreply == 'Y' || (printf("你的意见 (输入 'Y'/'N'): ") && scanf(" %c", &yourreply) == 1)){
			printf("出去吃\n");
		}
	}
	if(momreply == 'N'){
		if(momreply == 'N' || (printf("你的意见 (输入 'Y'/'N'): ") && scanf(" %c", &yourreply) == 1)){
			printf("不出去吃\n");
		}
	} 
	return 0;
}
