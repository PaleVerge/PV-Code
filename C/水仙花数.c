#include <stdio.h>
int main(void){
	int n;
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			n=100*i+1000*i+10*j+j;
			for(int k=32;k<100;k++){
				if(k*k==n){
					printf("%d\n",n);
				}
			}
		}
	}
	return 0;
}
