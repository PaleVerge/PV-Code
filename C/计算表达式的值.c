#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		double res=0;
		if(n%2==0){
			for(int i=2;i<=n;i+=2){
				res+=(double)1/i;
			}
		}else{
			for(int i=1;i<=n;i+=2){
				res+=(double)1/i;
			}
		}
		printf("%lf\n",res);
	}
	
	return 0;
}
