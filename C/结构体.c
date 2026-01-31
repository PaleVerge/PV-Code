#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	struct student{
	long long id;
	char name[15];
	int score;
	}stu[100];
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%lld %s %d",&stu[i].id,stu[i].name,&stu[i].score);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(stu[j].score<stu[j+1].score){
				struct student tmp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%lld %s %d\n",stu[i].id,stu[i].name,stu[i].score);
	}

	return 0;
}
