#include <stdio.h>
int cal(char c){
	if(c=='+'){
		return 2;
	}else if(c=='-'){
		return 0;
	}else if(c=='*'){
		return 1;
	}else if(c=='/'){
		return 1;
	}
	return 78;
}
int main(void){
	int t;
	scanf("%d",&t);
	getchar();
	while(t-->0){
		char c1,c2;
		scanf("1%c1=1%c1",&c1,&c2);
		getchar();
		if(cal(c1)==cal(c2)){
			printf("%d\n",1);
		}else{
			printf("%d\n",0);
		}
	}
	return 0;
}
