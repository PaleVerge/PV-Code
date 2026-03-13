/*【问题描述】输入n个学生的信息，每个学生信息包括姓名、身高、年龄。编程统计年龄为16岁以上（含16岁）的学生，身高不到1.6米（严格小于1.6米）的人数，并输出这些学生的姓名。
【输入形式】第一行一个正整数n，表示学生个数，n<=20 ; 以下n行，每一行依次输入一个学生的姓名、身高、年龄，数据之间用一个空格分开
【输出形式】输出年龄16以上但身高不到1.6米的学生的姓名，每个姓名一行，最后一行 输出这些学生的人数
【样例输入】
5
li 1.65 15
wang 1.70 18
zhang 1.55 17
liu 1.58 14
sun 1.49 17
【样例输出】
zhang
sun
2
【样例说明】
【评分标准】*/
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
