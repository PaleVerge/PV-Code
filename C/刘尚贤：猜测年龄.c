#include <stdio.h>
 int main()
{
	int age = 0;
	int found = 0;
    printf("正在解开年龄谜题...\n");    
	 
	printf("方法一：穷举法（从1岁开始一个个尝试）\n");   
	 
	for (age=1; ;age++) {
		if ((age % 2 == 1) && (age % 3 == 2) && (age % 5 == 3)) {            
			printf("穷举法找到的答案是：%d\n", age);
	        found = 1;            
			break;        
		}    
	}    
		if (!found) {
			printf("没有找到符合条件的年龄。\n");
		}  
	 
	printf("方法二：数学规律（利用规律更高效地寻找）\n");  
	 
	int second_age = 5; 
	 
	for (second_age = 5; ; second_age += 6){    
		if (second_age % 5 == 3) {
			printf("数学规律法找到的答案是：%d\n", second_age);            
			break;
		}    
	}    
	
	 return 0; 
}
