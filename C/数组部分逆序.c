#include<stdio.h>
void sort(int a[],int s,int t,int n){
	for(int i=0;i<n;i++){
		for(int j=s-1;j<t-1-i;j++){
			if(a[j]<a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main(void){
	int n,s,t;
	int a[20];
	
	while(scanf("%d %d %d",&n,&s,&t)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,s,t,n);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		putchar('\n');
	}
	return 0;
}
