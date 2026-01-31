#include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	while(n-->0){
		int m,i,n_odd=0,n_even=0;
		scanf("%d",&m);
		int a[m];
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
			if(a[i]%2==0){
				n_even++;
			}else{
				n_odd++;
			}
		}
		
		if(m<6){
			printf("No\n");
			continue;
		}
		if(n_odd>=1 && n_even>=5){
			printf("Yes\n");
		}else if(n_odd>=3 && n_even>=3){
			printf("Yes\n");
		}else if(n_odd>=5 && n_even>=1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}

	return 0;
}
