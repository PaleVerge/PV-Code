#include<stdio.h>
#define INT 54188
#define FLT 3.1415926535
//0,-,+, ,#,数字
int main(void){
	printf("整数\n");
	printf("1*%d*\n",INT);
	printf("2*%5d*\n",INT);		//最小字符宽度，自动扩充
	printf("3*%10d*\n",INT);	//最小字符宽度长度，自动扩充
	printf("4*%-10d*\n",INT);	//从左边开始
	printf("5*% d*\n",INT);		//正加空格负加负号
	printf("6*%o*\n",INT);
	printf("7*%x*\n",INT);
	printf("66*%#o*\n",INT);	//八进制加0
	printf("77*%#x*\n",INT);	//十六进制加0x
	
	
	printf("浮点数\n");
	printf("8*%f*\n",FLT);
	printf("9*%5f*\n",FLT);		//最小字符宽度长度，自动扩充
	printf("10*%-15f*\n",FLT);	//从左边开始
	printf("11*% f*\n",FLT);	//正加空格负加负号
	printf("12*%#f*\n",FLT);
	printf("13*%015f*\n",FLT);	//用0填充
	printf("14*%010.5f*\n",FLT);
}
