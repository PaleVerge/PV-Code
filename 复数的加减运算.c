#include <stdio.h>
#include <stdlib.h>

struct com{
	double real;
	double virt;
};
int main(void){
	int n;
	scanf("%d",&n);
	getchar();
	while(n-->0){
		struct com a,b;
		char cal;
		scanf("(%lf%lfi)",&a.real,&a.virt);
		scanf("%c",&cal);
		scanf("(%lf%lfi)",&b.real,&b.virt);
		getchar();
		if(cal=='+'){
			printf("%.2f%+.2fi\n",a.real+b.real,a.virt+b.virt);
		}
		if(cal=='-'){
			printf("%.2f%+.2fi\n",a.real-b.real,a.virt-b.virt);
		}
	}
	return 0;
}
