#include <stdio.h>

int main(void){
	int m,d;
	scanf("%d %d",&m,&d);
	if(m==2&&d<=29){
		printf("%d",4);
	}else if((m==1 || m==12) && d<=31&& d>0){
		printf("%d",4);
	}else if((m==3 || m==5) && d<=31&& d>0){
		printf("%d",1);
	}else if(m==4 && d<=30 && d>0){
		printf("%d",1);
	}else if(m==6 && d<=30 && d>0){
		printf("%d",2);
	}else if(m==7 && d<=31 && d>0){
		printf("%d",2);
	}else if(m==8 && d<=31 && d>0){
		printf("%d",2);
	}else if((m==9 || m==11) && d<=30 && d>0){
		printf("%d",3);
	}else if(m==10 && d<=31 && d>0){
		printf("%d",3);
	}else{
		printf("%d",5);
	}
	return 0;
}
