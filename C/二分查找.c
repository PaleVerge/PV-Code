#include<stdio.h>
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int BinSearch(int a[],int left,int right,int num){
	int mid;
	while(left<right){
		mid=(left+right)/2;
		if(a[mid]==num){
			return mid;
		}else{
			if(a[mid]<num){
				left=mid+1;
			}else{
				right=mid-1;
			}
		}
	}
	return -1;
}
int BinSearch_2(int a[],int left,int right,int num){
	int mid;
	if(left<right){
		return -1;
	}
	mid=(left+right)/2;
	if(a[mid]==num){
		return mid;
	}else{
		if(a[mid]<num){
			return BinSearch_2(a,mid+1,right,num);
		}else{
			return BinSearch_2(a,left,mid-1,num);
		}
	}
}
int main(void){
	int num,a[5]; 
	
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	sort(a,5);
	scanf("%d",&num);
	BinSearch(a,0,4,num);
	return 0;
}
