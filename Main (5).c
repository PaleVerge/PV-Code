#include <stdio.h>
struct student{
	char name[20];
	double hegiht;
	int age;
};
int main(void){
	struct student stu[21];
	int n,i,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf%d",stu[i].name,&stu[i].hegiht,&stu[i].age);
	}
	for(i=0;i<n;i++){
		if(stu[i].age>=16 && stu[i].hegiht<1.6){
			count++;
			printf("%s\n",stu[i].name);
		}
	}
	printf("%d",count);
	return 0;
}
