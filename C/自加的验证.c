#include<stdio.h>

int main(void){
	int a,x;
	a=2;
	x=(a++)+(a++);
	//结果与编译器有关，属于未定义行为
	printf("x=%d",x);
	
}
