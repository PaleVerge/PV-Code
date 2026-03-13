#include <stdio.h>
int main(void){
	int max,n;
	scanf("%d",&n);
	max=n;	//默认第一个数据为最大值
	while(1){
		scanf("%d",&n);
		if(n==0){	//输入0时结束输入
			break;
		}
		if(n>max){	//更新最大值
			max=n;
		}
	}
	printf("%d",max);
	return 0;
}
