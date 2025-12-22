/*2. 【指针-动态内存分配】统计不及格成绩的人数
【问题描述】
在主函数中读入一组成绩，成绩数目为n。使用动态内存分配创建一维数组，存放该组成绩，并统计不及格成绩的人数。
【输入形式】
测试数据有多组，每组单独占一行，第一个数n表示该组数据的个数，后跟n个整数，数据之间由空格分隔。
【输出形式】
对于每组测试数据，输出结果占一行，为该组成绩的不及格人数*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,count,* p,i;
	while(scanf("%d",&n)!=EOF){
		count=0;
		p=(int * )calloc(n,sizeof(int));
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++){
			if(*(p+i)<60){
				count++;
			}
		}
		free(p);
		printf("%d\n",count);
	}
	return 0;
}
