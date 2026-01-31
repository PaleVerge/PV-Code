#include <stdio.h>
int main(void){
	int m,n,count=0,t;
	scanf("%d %d",&m,&n);
	if(m>n){
		t=n;
		n=m;
		m=t;
	}
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			if(1000*i+100*i+10*j+j>=m && 1000*i+100*i+10*j+j<=n){
				for(int k=0;k<=100;k++){
					if(k*k==1000*i+100*i+10*j+j){
						printf("%d\n",1000*i+100*i+10*j+j);
						count++;
					}
				}
			}	
		}
	}
	
	
	if(count==0){
		printf("No answer!");
	}
	return 0;
}
