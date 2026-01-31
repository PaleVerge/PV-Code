#include <stdio.h>
int isprime(int n){
	int i=0;
	if(n<2){
		return 0;
	}
	if(n==2){
		return 1;
	}
	if(n%2==0){
		return 0;
	}
	for(i=3;i*i<n;i+=2){
		if(n%i!=0){
			return 1;
		}
	}
	return 0;
}
int main(void){
	int n;
	scanf("%d",&n);
	if(isprime(n)){
		printf("Yes");
	}else{
		printf("No");
	}
}
