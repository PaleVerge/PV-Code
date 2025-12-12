#include<stdio.h>
void move(int n,char sta,char end){
	printf("Move No.%d form %c to %c\n",n,sta,end);
}
void hanoi(int n,char A,char B,char C){
	if(n==1){
		move(n,A,C);
	}else{
		hanoi(n-1,A,C,B);
		move(n,A,C);
		hanoi(n-1,B,A,C);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
