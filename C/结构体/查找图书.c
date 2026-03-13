#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin)

struct book{
	long long id;
	char name[101];
	char auth[101];
	double price;
};
int main(void){
	int n,find;
	long long tofind;
	while(scanf("%d",&n)!=EOF){
		find=0;
		struct book *a=(struct book*)calloc(sizeof(struct book),n);
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i].id);
			getchar();
			gets(a[i].name);
			gets(a[i].auth);
			scanf("%lf",&a[i].price);
			
			a[i].name[strcspn(a[i].name,"\n")]='\0';
			a[i].auth[strcspn(a[i].auth,"\n")]='\0';
		}
		
		scanf("%lld",&tofind);
		
		for(int i=0;i<n;i++){
			if(a[i].id==tofind){
				find=1;
				printf("%lld %s %s %.2f\n",a[i].id,a[i].name,a[i].auth,a[i].price);
			}
		}
		if(!find){
			printf("No find!\n");
		}
	}
	
}
