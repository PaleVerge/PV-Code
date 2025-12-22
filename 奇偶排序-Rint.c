/*数据排序
【问题描述】对输入的整数进行排序。要求：奇数在前，偶数在后；对于奇数，按照从大到小的顺序排序；对于偶数，按照从小到大的顺序排序。
【输入形式】第一个整数为待排序的整数的个数n（0≤n），接着是n个整数。所有数据之间均用空格分隔。
【输出形式】输出单独的一行，对这n个整数进行排序后的结果，数据之间用一个空格分隔。要求：奇数在前，偶数在后；对于奇数，按照从大到小的顺序排序；对于偶数，按照从小到大的顺序排序。如果输入的第一个整数为0，则返回No Data。

【样例输入1】10 1 2 -3 4 5 7 11 18 7 0↙

【样例输出1】11 7 7 5 1 -3 0 2 4 18

【样例输入2】0↙
【样例输出2】No Data

【评分标准】所有测试数据通过得满分，否则零分。*/
#include <stdio.h>
void bubblesort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main(void){
	int a[101],n,i;
	scanf("%d",&n);
	if(n==0){
		printf("No Date\n");
	}else{
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		bubblesort(a,n);
		int first=1;
		for(i=n-1;i>=0;i--){
			if(a[i] %2 !=0){
				if(first){
					printf("%d",a[i]);
					first=0;
				}else{
					printf("% d",a[i]);
				}
			}
		}
		for(i=0;i<n;i++){
			if(a[i] %2 ==0){
				if(first){
					printf("%d",a[i]);
					first=0;
				}else{
					printf("% d",a[i]);
				}
			}
		}
	}
	return 0;
}
