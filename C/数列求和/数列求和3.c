/*问题描述】
计算公式的前n项之和，公式为：1+1/2-3/4+5/6-7/8+.......，其中 0<=n<=20
注意，n=0时结果为0.00，n=1时结果为1.00
【输入形式】输入一个整数n
【输出形式】输出公式的前n项之和，结果保留小数点2位
【样例输入】
5
【样例输出】
0.71*/
#include <stdio.h>

int main(void){
	double res=1.00;
	int n,i;
	scanf("%d",&n);
	if(n==0){
		printf("%.2f",0.00);	
	}else if(n==1){
		printf("%.2f",1.00);
	}else{
		for(i=2;i<=n;i++){
			int son=2*i-3;
			int mom=2*i-2;
			if(i%2==0){
				res+=(double)son/mom;	
			}
			if(i%2!=0){
				res-=(double)son/mom;
			}
		}
		printf("%.2f",res);	
	}
	return 0;
}
