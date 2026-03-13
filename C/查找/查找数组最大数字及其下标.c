#include<stdio.h>
int main(void){
	int n,max,index=0;
	int a[20];

	scanf("%d",&n);	//输入数组长度
	for(int i=0;i<n;i++){	//输入数组元素
		scanf("%d",&a[i]);
	}
	max=a[0];	//默认第一个元素为最大值
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];;
			index=i;	//记录最大值的下标
		}
	}
	printf("%d %d",max,index);
	return 0;
}
