#include<stdio.h>

int bubble_sort_1(int a[],int n){
	int swap_count=0; //冒泡次数计数器
	for(int i=0;i<n-1;i++){
		int swapped=0; //是否交换标记
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){  //升序排序
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				swapped=1; //已交换
				swap_count++;
			}
		}
		if(!swapped)break; //若该轮未交换，则已经顺序，提前结束生剩余的轮
	}
	return swap_count;
}
//仅写法不同，效率相同，遍历方向不同
void bubble_sort_2(int a[]，int n) {
	int swap_count=0;
    for (int i=n-1;i>0;i--) {
		int swapped=0;
        for (int j=0;j<i;j++) {
            if (a[j]>a[j+1]) {  //升序排序
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
				swapped=1;
				swap_count++;
            }
        }
		if(!swapped)break;
    }
	return swap_count;
}
int main(void){
	int n,a[101];
	while(scanf("%d",&n)!=EOF){ //多组数据输入，n为单组数据个数
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		bubble_sort(a,n);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
