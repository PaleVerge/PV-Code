#include<stdio.h>
void bublesort(int a[],int n){
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

int BinSearch(int a[],int left,int right,int num){ //
	int mid;
	int res=-1; //找不到默认返回-1

	while(left <= right){
		mid = left+(right-left)/2; //防止left+right溢出
		if(a[mid]==num){
			res = mid;
			right = mid-1; //找到第一个出现的位置
		}else{
			if(a[mid]<num){
				left=mid+1;
			}else{
				right=mid-1;
			}
		}
	}
	return res;
}
int BinSearch_2(int a[],int left,int right,int num){ //递归算法，效率低下
	int mid;
	if(left>right){
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
	bublesort(a,5); //先排序
	scanf("%d",&num);
	BinSearch(a,0,4,num);
	return 0;
}
