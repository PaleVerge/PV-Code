#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b = a%3;
	c = a%5;
	if(b == 0 && c == 0)
		printf("can be divisible by 3,5.\n");
	else if(b == 0 && c != 0){
		printf("can be divisible by 3.\n");
	}	
	else if(c == 0 && b != 0){
		printf("can be divisible by 5\n");
	}	
	else{
		printf("can not be divisible by 3,5.\n");
	}
	return 0;
}
