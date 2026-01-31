#include <stdio.h>
int main(){
	int row=1;
	int inp=0;
	int sum=0;
	int delta_nums=0;
	scanf("%d",&inp);
	while(sum+row<inp){
		sum+=row;
		row++;
	}
	delta_nums=inp-((1+row-1)*(row-1)/2);

	if(row%2==0){
		
		printf("%d/%d",delta_nums,row+1-delta_nums);
		
	}else{
		printf("%d/%d",row+1-delta_nums,delta_nums);
	}

	return 0;
}
