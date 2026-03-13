#include<stdio.h>
#define N 5

int main(void){
	int a[N],*p=a;
	for(int i=0;i<N;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<N;i++){	//指针不动
		printf("%d ",*(a+i));
	}
	
	putchar('\n');
	
	for(p=a;p<a+N;p++){		//指针动
		printf("%d ",*(p));
	}
	return 0;
}

