# 这是一个README文件。
### 这个仓库中包含了我平时练习的部分代码，以及注意事项。
### 仓库仍然在建设当中。

## 下面为注意事项：

## 对于for循环中的i，要防止大于字符串长度，如：
``c
for (int i = 0; i < k && i < len; i++) {
   ;
}
``
## 缓冲区问题
* scanf()后换行符 (\n) 依然留在输入缓冲区里，会影响后续字符读取，必须清空缓冲区
```c
while(getchar()!='\n');
//
getchar();
```
## 凯撒密码（循环问题）：
* a[i] = (a[i] - 'A' + 2) % 26 + 'A';

## 求数字的首位
* 字符串指针法：
```c
char * p=str// 定义指针指向数组首地址,*p 即为第一个字符（最高位数字）
```
* 数值计算法：
```c
  while (n >= 10) { n /= 10; }
```
## 哈希数组（通常是一个大小为 256 的 int 或 bool 数组）
``` c
int flag[256]={0};
for(int i=0;a[i]!='\0';i++){
        if(flag[(int)a[i]]==0){
            printf("%c",a[i]);
            flag[(int)a[i]]=1;
        }
   }
```
## 去除fgets读取字符串末尾的换行符方法
```c
    char str[20];
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
```
```c
    size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
```
```c
    scanf("%[^\n]", str); // 读取直到遇到换行符，并将换行符留在缓冲区
	getchar();
	//原理：%[^\n] 告诉 scanf：“读取除了换行符以外的所有内容”。
	//风险：溢出风险：如果不写成 %19[^\n]（假设数组大小 20），很容易导致内存溢出。
	//空输入崩溃：如果用户第一下就按回车，scanf 会因为匹配失败直接返回，而不给 str 赋值，甚至可能导致程序逻辑死循环。
```
```c
    //输入定长字符串
char * 3in1_gets(char * str,int n){
	char * rt_str=fgets(str,n,stdin);
	char * address_n;
	
	if(rt_str){
		address_n=strchr(str,'\n');
		//清除换行符
		if(address_n)
			*address_n='\0';
		//字符串超过长度->清空缓冲区
		else{
			int hcq;
			while ((hcq=getchar())!='\n' && hcq!=EOF)
				continue;
		}
	}
	return rt_str;
}
```
## 冒泡排序
* 注意比较和交换的都是a[j]
## 最值问题
* 初始化从0开始，否则可能越界。
## NULL野指针
* 不指向任何有效的内存地址，不可进行操作，应该定义两个普通的整数变量（如 m, n），然后通过取地址符 & 将它们的地址传递给指针参数。
## 字符串计算问题
* char-'0'为字符char对应的数字
```c
for (int i = 0; a[i] != '\0'; i++) {
            if (isdigit(a[i])) {
                // 核心计算逻辑：将字符转换为对应的数值并累加
                res = res * 10 + (a[i] - '0');
                found = 1;
            }
        }
 //
 for(int i=strlen(a)-1;i>=0;i--){
        if(isdigit(a[i])){
            res+=n*(a[i]-'0');
            n*=10;
        }
    }
```
## 回文串问题
* 一旦不匹配应立即跳出
```c
  while (i < j) {
  // 如果不匹配（忽略大小写）
  if (toupper((unsigned char)s[i]) != toupper((unsigned char)s[j])) {
    flag = 0;
    break; // 发现不匹配，直接退出循环
  }
    i++;
    j--;
  }
```
## 数字镜像变换
* 0-9，2-8，2-7……

```c
if (isdigit(a)) {
    putchar('9' - (a - '0'));// 如 a='1', 则 '9' - (49-48) = '9' - 1 = '8'
} else {
    putchar(a);// 原样输出非数字字符（包括空格和换行符）
}
```
##   while(scanf("%c",&a)!=EOF)
* 会读取回车，回车字符影响下面的判断
* while(scanf(" %c", &a) != EOF)会自动跳过所有空白字符
## 局部排序
* 内层循环变，外层循环不变
## 动态内存分配
* int *a = (int *)malloc(n * sizeof(int));
* 别忘了free(a);
## 元素移动问题
  * 后n个元素移动到前n个
  ````c
    int temp[10]; // 辅助数组
    int i;

    // 1. 先把后 n 个元素存入 temp 的前面
    for (i = 0; i < n; i++) {
    temp[i] = a[10 - n + i];
    }
    // 2. 再把原数组的前 10-n 个元素存入 temp 的后面
    for (i = 0; i < 10 - n; i++) {
    temp[n + i] = a[i];
    }
    // 3. 将 temp 的结果拷贝回原数组 a
    for (i = 0; i < 10; i++) {
    a[i] = temp[i];
    }
  ````
* 第n个元素移动到最后
  ````c
    int tmp = *(a + n);// 2. 备份要移动的元素
    for (int i = n; i < m - 1; i++) {// 3. 从下标 n 开始，后面的元素依次前移
        *(a + i) = *(a + i + 1);
    }
    *(a + m - 1) = tmp;// 4. 将备份的元素放到最后一个位置 (m-1)
  ````
### 只有这么多了.


