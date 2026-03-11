# 这是一个README文件
### 仓库仍然在建设当中……

![PaleVerge's Stats](https://github-readme-stats-eight-theta.vercel.app/api?username=PaleVerge&show_icons=true&theme=material-palenight)

![Top Langs](https://github-readme-stats-eight-theta.vercel.app/api/top-langs/?username=PaleVerge&layout=compact&theme=material-palenight)

![Readme Card](https://github-readme-stats-eight-theta.vercel.app/api/pin/?username=PaleVerge&repo=PV-Code&theme=material-palenight)
# 🚀 图  例

  #### ✅ 已完成 

  #### ⚠️ 未完成

  #### 🛠️ 待改动
  ##
  ##

# 📅 TODO List

  #### ✅ 缓冲区问题
  #### ✅ 二分查找
  #### ✅ 高精度算法
  #### ✅ 约瑟夫问题

  #### ✅ 选择排序
  #### ✅ 桶排序
  #### ✅ 堆排序
  #### ✅ 快速排序
  #### ✅ 冒泡排序

  #### ✅ 二分查找
  #### ⚠️ DFS基础回溯
  #### ⚠️ DFS剪枝
  #### ⚠️ BFS 
  #### ⚠️ 记忆化搜索

  #### ⚠️ 红黑树
  #### ⚠️ 动态规划
  #### ✅ 前缀和
  #### ⚠️ 差分
  #### ✅ 递归
  #### ⚠️ 构造
  #### ⚠️ 进制转换
  #### ⚠️ 离散化
  #### ⚠️ 位运算
  #### ⚠️ 贪心
  #### ⚠️ 双指针
  
  #### ⚠️ 点和线的关系
  #### ⚠️ 点积和叉积
  #### ⚠️ 二维计算几何基础
  #### ⚠️ 计算集合基础

  #### ⚠️ KMP字符串哈希
  #### ⚠️ 字典树基础
  #### ⚠️ tire
  #### ⚠️ Manacher

  #### ⚠️ 01背包
  #### ⚠️ 动态规划基础：LCS/LIS/二维DP/线性Dp
  #### ⚠️ 期望DP
  #### ⚠️ 区间DP
  #### ⚠️ 树形DP
  #### ⚠️ 数位DP
  #### ⚠️ 状压DP

  #### ⚠️ 计算原理
  #### ⚠️ 排列组合
  #### ⚠️ 费马小定理逆元
  #### ⚠️ 高斯消元
  #### ⚠️ 素数筛选
  #### ⚠️ 唯一分解定理
  #### ⚠️ 行列式
  #### ⚠️ 裴蜀定理
  #### ⚠️ 欧拉函数欧拉降幂
  #### ⚠️ 快速幂
  #### ⚠️ 矩阵乘法整除同余GCDLCM
  #### ⚠️ 素数朴素判定埃式筛选法

  #### ⚠️ 分块基础
  #### ⚠️ 普通莫队
  #### ⚠️ 单调栈单调队列
  #### ⚠️ 树形数据结构
  #### ⚠️ 基础树上问题
  #### ⚠️ 并查集基础
  #### ⚠️ 带权并差集
  #### ⚠️ 可撤销并并查集
  #### ⚠️ ST表
  #### ⚠️ 堆
  #### ⚠️ 链表栈队列

  #### ⚠️ 生成树
  #### ⚠️ 拓扑排序
  #### ⚠️ 最短路
  #### ⚠️ 图的基础
  


# C部分
## 排序
### 桶排序
```c
const int MAXN=5e5+7;

int bucket[MAXN];
void bucket_sort(int a[],int n){
	for(int i=0;i<n;i++){ //遍历数组，将数组元素放到对应桶中
		int x;x=a[i];
		if(x<MAXN)bucket[x]++;  //桶中元素数量++
	}
	for(int i=0;i<=MAXN;i++){
		for(int j=1;j <= bucket[i];j++){ 
			cout<<i<<" ";
		}
	}
}
```

### 选择排序
时间复杂度：O(n^2)
```c 
//大数沉底
void select_sort(int a[],int n){
	for(int i=n-1;i>0;i--){/*要选择的次数:0~n-2共n-1次*/
		int max_id=0;
		for(int j=1;j<=i;j++){
			if(a[j]>a[max_id]){
				max_id=j;
			}
		}if(a[max_id]!=i)swap(a[max_id],a[i]);/*如果max在循环中改变了,就需要交换数据*/
	}
}
```
```c
//小数提前
void select_sort(int a[],int n){
	for(int i=0;i<n-1;i++){/*要选择的次数:0~n-2共n-1次*/
		int max_id=0;
		int min_id=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_id]){
				min_id=j;
			}
		}
		if(a[min_id]!=i)swap(a[min_id],a[i]);/*如果min在循环中改变了,就需要交换数据*/
	}
}
```

### 归并排序
![alt text](clipboard_2026-03-05_22-22.png)
核心思想：分治
```c
void merge_sort(int a[],int l,int r){
	if(l==r)return; //递归出口：当区间大小为1时，直接返回
	int mid=(l+r)/2;
	//左右部分分别排序：
	merge_sort(int a[],l,mid);
	merge_sort(int a[],mid+1,r);

	int pl=l,pr=mid+1,pb=l; 
	//pl为左半边的下标,pr为右半边的下标，b为数组b的下标
	//a: 1 | 3 | 5 | 7 | 2 | 5 | 7 | 8
	//   l          mid              r

	//将a[lr]一个个放入b[lr]当中：
	while(pl<=mid || pr<=r){
		if(pl>mid){ //左半边已经放完：
			b[pb++]=a[pr++];//右边直接放
		}else if(pr>r){ //右半边已经放完：
			b[pb++]=a[pl++];//左边直接放
		}else{
			//两边都有元素，取个小的放到b里
			if(a[pl] < a[pr]){
				b[pb++]=a[pl++];
			}else{
				b[pb++]=a[pr++];
			}
		}
	}
	//合并后将b复制回a：
	for(int i=l;i<r;i++){
		a[i]=b[i];
	}
}
```
### 快速排序
时间复杂度：O(nlogn)，不需要额外空间

核心思想：分治
![alt text](clipboard_2026-03-05_22-19.png)
```cpp
int Partition(int a[],int l,int r){
	int pivot=a[r];//以a[r]为基准点，partition会将a[r]放到正确位置上
	int i=l,j=r;

	while(i<j){
		while(i<j && a[i]<=pivot)i++;
		//循环后，i>=j或者a[i]>pivot，==>说明找到了要交换的位置

		while(i<j&&a[j]>=pivot)j--;
		//循环后，i>=j或者a[i]<pivot，==>说明找到了要交换的位置

		//若i<j,则存在a[j]<pivot
		if(i<j)swap(a[i],a[j]);
		//否则a[r]<=pivot,a[i]>=pivot
		else swap(a[i],a[r];)
	}
}
void quick_sort(int a[],int l,int r){
	if(l<r){
		int mid=Partition(a,l,r); //将区间内某个基准数放到正确的位置，并返回该位置

		quick_sort(a,l,mid);//对基准点左边的数再执行快速排序
		quick_sort(a,mid+1,r);//对基准点右边的数再执行快速排序
	}

}
```

### 插入排序
时间复杂度：O(n^2)
输入:数组名称(即数组首地址)、数组中元素个数

指针式写法：
```c
void insert_sort(int *a, int n){
	for (int i=1; i<n; i++) //i表示当前要确定的位置,下标从1开始因为一个数显然有序，不需要排序。
    {
		int val=*(a+i); //暂存下标为i的数。
    	for (int j=i-1; j>=0 && val <*(a+j); j--) //j=i-1是下标i左边的数,与之对比大小找插入位置。
    	{
        	*(a+j+1) = *(a+j);
        	//如果满足条件就往后挪，让出空位。最坏的情况就是t比下标为0的数都小,它要放在最前面,j==-1,退出循环
    	}
    	*(a+j+1) = val; /*找到下标为i的数的放置位置*/
	}
}
```
数组式写法：
```c
void insert_sort(int a[],int n){
	for (int i=1; i<n; i++)//i表示当前要确定的位置,下标从1开始因为一个数显然有序，不需要排序。
	{ 
		int val=a[i]; //暂存下标为i的数。
		for (int j=i-1; j>=0 && val < a[j]; j--)   //j=i-1是下标i左边的数,与之对比大小找插入位置。
		{  
			a[j+1]=a[j];
			//如果满足条件就往后挪，让出空位。最坏的情况就是t比下标为0的数都小,它要放在最前面,j==-1,退出循环
		}
		a[j+1] = val; /*找到下标为i的数的放置位置*/
	}
}
```

### 渗透建堆
```c
//输入:数组名称、参与建堆元素的个数、从第几个元素开始
void sift(int *x, int n, int s){
  int t, k, j;
  t = *(x+s); /*暂存开始元素*/
  k = s;   /*开始元素下标*/
  j = 2*k + 1; /*右子树元素下标*/
  while (j<n){
    if (j<n-1 && *(x+j) < *(x+j+1)){ /*判断是否满足堆的条件:满足就继续下一轮比较,否则调整。*/
      j++;
    }
    if (t<*(x+j)){ /*调整*/
      *(x+k) = *(x+j);
      k = j; /*调整后,开始元素也随之调整*/
      j = 2*k + 1;
    }else{  /*没有需要调整了,已经是个堆了,退出循环。*/
      break;
    }
  } 
  *(x+k) = t; /*开始元素放到它正确位置*/
}
```

### 堆排序
```c
//输入:数组名称、数组中元素个数
void heap_sort(int *x, int n){
  int i, k, t;
  //int *p;
  for (i=n/2-1; i>=0; i--){
    sift(x,n,i); /*初始建堆*/
  } 
  for (k=n-1; k>=1; k--){
    t = *(x+0); /*堆顶放到最后*/
    *(x+0) = *(x+k);
    *(x+k) = t;
    sift(x,k,0); /*剩下的数再建堆*/ 
  }
}

```

### 希尔排序
```c
//输入:数组名称、数组中元素个数
void shell_sort(int *x, int n)
{
  int h, j, k, t;
  for (h=n/2; h>0; h=h/2) /*控制增量*/
  {
    for (j=h; j<n; j++) /*这个实际上就是上面的直接插入排序*/
    {
      t = *(x+j);
      for (k=j-h; (k>=0 && t<*(x+k)); k-=h)
        {
        *(x+k+h) = *(x+k);
        }
      *(x+k+h) = t;
    }
  }
}
```
### 冒泡排序
```c
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
```
### 下沉式冒泡排序
```c
//输入:数组名称、数组中元素个数
//记录最后一次交换位置，动态缩小遍历范围
void bubble_sort_optimized(int *arr, int arr_len) {
    // 外层循环：unsorted_right 表示当前未排序部分的右边界（初始为数组最后一个元素下标）
    for (int unsorted_right = arr_len - 1; unsorted_right > 0; unsorted_right = last_swap_pos) {
        //   current_idx: 当前遍历的下标
        //   last_swap_pos: 记录本轮最后一次发生交换的下标（初始为0，若未交换则直接终止外层循环）
        for (int current_idx = 0, last_swap_pos = 0; current_idx < unsorted_right; current_idx++) {
            // 升序排序：前一个元素 > 后一个元素 则交换
            if (*(arr + current_idx) > *(arr + current_idx + 1)) {
                // 交换相邻元素（指针写法，等价于 arr[current_idx] 和 arr[current_idx+1]）
                int tmp = *(arr + current_idx);
                *(arr + current_idx) = *(arr + current_idx + 1);
                *(arr + current_idx + 1) = tmp;
                // 更新最后一次交换的位置：current_idx之后的元素已有序
                last_swap_pos = current_idx;
            }
        }
    }
}
```
* 注意比较和交换的都是a[j]
  

## 查找
### 二分查找
```c
//从数组中找两个数，和等于m
//F1：遍历+剩余二分
//F2：双指针/尺取法O(n)

//二分答案

```

## 前缀和
* prefix表示前缀和，由一个用户输入的数组生成
* prefix为预处理算法，只适用于静态数组，一边修改一边查询需要使用树状数组或线段树等

prefix[i]=E(i,j=1)a[j]
prefix[i]=E(i-1,j=1)a[j] + a[i]
```cpp
//可以用于快速生成prefix：
a[0]=0; 
for(int i=1;i<=n;i++){
	prefix[i]=prefix[i-1]+a[i]
}

```
 
```cpp
//可以O(1)的求数组a的一段区间的和
sum(l,r)=prefix[r]-prefix[l-1]
```

```cpp
for(int i=1;i<=n;i++){
  prefix[i]=prefix[i-1]+a[i];
}
```
## 差分
diff[i]=a[i]-a[i-1]

* 对差分数组做前缀和可以还原为数组:
diff[1]=a[1];
diff[2]=a[2]-a[1];
...
diff[n]=a[n]-a[n-1];

prefix[n]=E(i,j=1)a[j]

利用差分数组可以实现快速的区间修改，将区间[l,r]都加上x：
diff[l]+=x;
diff[r+1]-=x;
再做前缀和恢复原数组即可。 
差分数组不能实现边修改边查询，只能实现多次修改后多次查询。

差分的实现：
```cpp
a[0]=0;
for(int i=1;i<=n;i++){
	diff[i]=a[i]-a[i-1];
}
diff[l]+=x;
diff[r+1]-=x;
```
[text](C++/差分/差分-区间更新.cpp)

## 递归
* 递归终止条件（基本情况）+递归表达式（递归调用）
* 将大问题分解为规模更小的子问题，递归调用解决每个子问题，递归终止来借宿递归
* 避免不必要的重复计算，通过记忆化/剪枝优化递归
* 考虑边界条件，有时候递归出口不止一个

* 可以用来处理复杂的数据结构和算法，如树和图的遍历
* 存在栈溢出风险，栈空间一般只有8MB,一般不超过1e6层
* 适合处理线性动态规划问题，问题的规模没有明显的缩减，需要特定的迭代次数
* 适合处理大部分动态规划问题
* 
[斐波那契数列](C++/递归/fib（递归）.cpp)

！！！！未完待续！！！！
           
## 离散化
把无限空间中的有限的个体映射到有限的空间中去，一次提高算法的时空效率。  

将数组的值域雅安所，更加关心素元素的大小关系。
要求数组内部有序，一般是去重的。

可以直接通过离散化下标得到值，也能通过值得到离散化下标（通过二分实现）

离散化不会单独考察，一般结合树状数组、线段树、二维平面的计算几何等一起考察。
## 位运算

## 贪心

## 枚举
用于规模小，解空间可枚举的情况。

解空间的类型：
一个范围内的所有数字，二元组、字符串等
解空间树，子集树和排列树，需要用回溯法进行枚举

循环枚举解空间：

首先确定解空间的维度，及问题中需要枚举的变量个数
## 双指针

## 构造

## 进制转换
 
### 高精度算法
  * C/C++用字符数组/字符串模拟，大数组尽量不要动态分配，尽量定义为全局静态数组。
  * 字符数组占用空间小，整型数组为char的4倍。字符数组读入数据方便，scanf或gets计科，整型数组要用%1d逐个读取，存入整型数组每个元素当中。
  * 全局变量在编译的时候会自动初始化为0，局部变量不可以省略初始化。因此全局静态数组不需要初始化为0。
  * 大数组（大于1w）不能定义在函数内部，可能会栈溢出。局部变量栈空间小。
  * 1MB--25w的数组
  * Py/Java可直接计算
  * 蓝桥杯为单组数据。
  * 1. 数据对齐：正数个位对其，实数小数点对齐。字符串反转
  * 2. 字符串转换
  * 3. 非有效数据置零（读入前进行）
  
  ```c
  a[i]=0; 
  a[i]='\0';
  memset(s,0,sizeof(a));
  ```

  ## 加法
  输出（注意i>0，使得0能正常输出）
  ## 除法
  * 高精度/单精度
  * 单精度/高精度
    
  计算方法：以字符串接受高精度，转换为数字后储存在字符数组中，从高位到低位处理，模拟除法计算。


## 变钱问题

  ### 对于两个互质正整数$N$和$M$，最大的无法表示为 $nN + mM$（其中 $n, m \ge 0$）的整数被称为 Frobenius 数，记作 $g(N, M)$。

  ### $g(N, M) = NM - N - M$


## ⚠️ 注意事项

## for循环中的i不大于字符串长度
```c
for (int i = 0; i < k && i < len; i++) {
   ;
}
```

# 缓冲区问题

  * scanf()后换行符 (\n) 依然留在输入缓冲区里，会影响后续字符读取，必须清空缓冲区
    ```c
    while(getchar()!='\n');
    //
    getchar();
    ```

  </details>
  
## 凯撒密码（循环问题）
```c
a[i] = (a[i] - 'A' + 2) % 26 + 'A';
```
## 求数字的首位
* 字符串指针法：
  ```c
  char * p=str// 定义指针指向数组首地址,*p 即为第一个字符（最高位数字）
  ```
* 数值计算法：
  ```c
    while (n >= 10) { n /= 10; }
  ```

## 哈希数组
  ``` c
  //通常是一个大小为 256 的 int 或 bool 数组
  int flag[256]={0};
  for(int i=0;a[i]!='\0';i++){
          if(flag[(int)a[i]]==0){
              printf("%c",a[i]);
              flag[(int)a[i]]=1;
          }
    }
  ```

# 去除fgets读取字符串末尾的换行符

## 使用string.h中的strcspn()
  ```c
      char str[20];
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")] = '\0';
  ```
## 替换倒数第二个字符，若缓冲区已满可能替换错误
  ```c
      size_t len = strlen(str);
      
    if (len > 0 && str[len - 1] == '\n')
      str[len - 1] = '\0';
  ```
## 利用正则表达式，^表示排除
  ```c
      scanf("%[^\n]", str); // 读取直到遇到换行符，并将换行符留在缓冲区
    getchar();
    //原理：%[^\n] 告诉 scanf：“读取除了换行符以外的所有内容”。
    //风险：溢出风险：如果不写成 %19[^\n]（假设数组大小 20），很容易导致内存溢出。
    //空输入崩溃：如果用户第一下就按回车，scanf 会因为匹配失败直接返回，而不给 str 赋值，甚至可能导致程序逻辑死循环。
  ```
## 3in1gets()
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


## sizeof
* 实际上是一个运算符，而不是一个函数，在特定情况下，不需要括号。
* 对变量或常量（即表达式）使用 sizeof 时，括号是可选的。
* 对数据类型使用 sizeof 时，括号是强制性的。
  ```c
  int size3 = sizeof(int);   // 合法
  int size4 = sizeof int;    // 错误
  ```
## 最值问题
* 初始化从0开始，否则可能越界。
## NULL野指针
* 不指向任何有效的内存地址，不可进行操作，应该定义两个普通的整数变量（如 m, n），然后通过取地址符 & 将它们的地址传递给指针参数。
  
<details><summary><b><font size="5">字符串问题</font></summary>

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

   </details>

```c
while(scanf("%c",&a)!=EOF)
//会读取回车，回车字符影响下面的判断
while(scanf(" %c", &a) != EOF)会自动跳过所有空白字符
```
## 局部排序
* 内层循环变，外层循环不变
## 动态内存分配
```c
int *a = (int *)malloc(n * sizeof(int));
//别忘了free(a);
```
## 元素移动问题
  * 后n个元素移动到前n个
    ```c
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
    ```
* 第n个元素移动到最后
  ```c
    int tmp = *(a + n);// 2. 备份要移动的元素
    for (int i = n; i < m - 1; i++) {// 3. 从下标 n 开始，后面的元素依次前移
        *(a + i) = *(a + i + 1);
    }
    *(a + m - 1) = tmp;// 4. 将备份的元素放到最后一个位置 (m-1)
  ```



  
## ASCII码
```
字符 -> ASCII码
———————————————
  0 ->  48    
  1 ->  49
  2 ->  50
  a ->  97
  z ->  122
  A ->  65
  Z ->  90    
————————————————
```


# C++部分
c++万能头文件

```cpp
    #include <bits/stdc++.h> 
```

# 输入输出

* 取消同步流，使得cin，cout效率媲美printf，scanf
    ```cpp
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ```

## endl
相比"\n"，可以刷新输出缓冲区

## cout 控制符
* 位于iomanip中
    ```cpp
    dec //设置基数为10，后面10进制输出
    hex //设置基数为16，后面16进制输出
    oct //设置基数为8，后面8进制输出
    setw(n) //设置域宽为n，设置一次使用一次
    setfill(c) //设置填充字符为c,持久性设置
    setiosflags(ios::left/right)//左对齐，右对齐
    setiosflags(ios::skipws/uppercase/lowercase)//忽略前导空白
    setiosflags(ios::uppercase/lowercase)//16进制大写输出，16进制小写输出
    setprecision(n) //设置浮点精度为n
    setiosflags(ios::fixed)//固定的浮点显示
    setiosflags(ios::scientific)//指数显示
    ```

* 输入输出流和格式化输入输出最好不混用

# 字符串
```cpp
cin();          //遇到第一个空格就停止
cin.ignore();   // 跳过缓冲区里的换行符

getline(cin，strname)
//cin一整行名为strname的字符串，直到遇到换行符
  
//成员函数
str.substr(a,n)
//提取a起始长度为n的子串，若无n自动提取整个，n不可越界

string(n,‘a’)
//初始化一个有n个a字符的字符串 

str.c_str()
//将cpp的字符串转为c风格的字符数组，printf输出时需要进行转换

str.length() / str.size()
//获取长度，类型为unsigned，使用前最好(int)转换

str.find()
//查找字串位置，返回字串起始位置，没找到返回-1

str.append("xxx") 
//追加字符串，等同于+

str.repalce(a,n,"xxx")
//a字串位置，n字串长度，替换

str1.compare(str2) // < > =
//字符串比较，按照字典序比较，不看长度，从小到大逐个比较

//字符串遍历,循环枚举下标auto
    //修改无效，i为拷贝
    for(auto i : s){
        cout << i;
        i = 'a';
    }
    //修改有效，&表示取引用类型，就是s本身
    for(auto &i : s){
        cout << i;
        i = 'a';
    }

//查找单词，防止词中词，前后加上空格
word =' '+word+' '
s =' '+s+' '

//大小写转换
transform(word.begin(), word.end(), word.begin(), ::tolower);
transform(s.begin(), s.end(), s.begin(), ::tolower);

reverse(str)//字符串反转
```

  

# STL

## queue
先进先出
可以通过队列取出，实现数组的反转
```cpp

```
## priority_quene
先进先出，优先有序队列，默认从大到小

## que
双端队列

## stack
先进后出
```cpp

```

## set
存储唯一元素，默认使用升序排序
内部使用红黑树实现，保持元素的有序性。
插入重复元素时，set会自动忽略。
时间复杂度O(log n)

```cpp
template <class Key,class Compare = less<Key>,class Allocator = allocator<Key>>
//元素类型，元素之之间比较函数对象的类型（默认less按照元素的值进行比较），分配内存分配器类型
class set;
```
```cpp
insert()
erase()
find()
lower_bound()
upper_bound()
equal_range() //返回一个范围，包含所有给定值的元素
swap() //交换两个集合
begin()
end()
empty()
clear()
size()
rend()
rbegin() //返回集合末尾位置的逆向迭代器

set<int,greater<int>> myset;
//修改比较方法1
struct Mycompare{
  bool operator()(const int& a,const int & b)const {
    return a > b;
  }
};
set<int ,Mycompare> myset;
//修改比较方法2
```


## multiset
允许存储重复的元素
默认升须排序
```cpp
erase(x) //会删除全部相同的x元素
erase(mst.find(x))//删除但一删除单一元素
```
## unordered_set
无特定顺序，时间复杂度不稳定，使用哈希实现，只能储存不重复元素
一般不使用

## pair
一个模板类，表示一对值的组合。
可以将两个值组合在一起，传递储存和操作。
位于utility头文件中。
```cpp
template <class T1,class T2>
struct pair{
  T1 first;
  T2 second;
  pair();
  pair(const T1& x,const T2&y);
  bool opeator==(const pair& rhs) const;
  bool opeator!=(const pair& rhs) const;
}
```
```cpp
pair<int,double> p1(1,2.5);
cout<<p1.first<<p1.second<<endl;
```
pair的嵌套
```cpp
pair <int,int> p1(2,3);
pair <int,pair(int,int)>p2(1,p1);
pair <int,pair(int,int)>p2(1,make_pair(4,5));
```
### pair自带的排序规则：
按照first成员进行升序排序，若相等，按照sencond成员进行升序排序。
## map
* 关联容器，存放键值对，数据结构为红黑树
Key 键
T 值
```cpp
template <class Key,class T> ;
class map
```

```cpp
.insert() //插入
.erase()  //删除
.find()   //查找
.count()  //统计元素个数
.size()   //返回元素个数
.begin()  //返回指定容器起始位置的迭代器
.end()    //返回指定容器末尾位置的迭代器
.clear()  //清空容器
.empty()  //判断容器是否为空
make_pair(4,"abc")==={4,"abc"};
```


```cpp
template <class Key,class T> ;
class mutimap;
```
关联容器，可存放多个有相同键的键值对，数据结构为红黑树

```cpp
template <class Key,class T> ;
class unordered_map;
```
关联容器，储存键值对，不会根据键的顺序排序，而是哈希映射到储存桶
* 极好的平均时间复杂度，极坏的最差时间复杂度

## list
* 双向链表容器，插入和删除时间复杂度为O(1),访问和查找为O(n)，不适合频繁随机访问。
* 以节点形式储存元素，用指针连接节点，使用频率不高
* 具有双向性，可以在任意位置插入，删除和访问
* 动态大小
* 不连续存储
```cpp
template <class T,class Allocator = std::allocator<T>>
class list;
//容器中储存的元素类型，分配内存的分配器类型
```
```cpp
list <int> mylist;
mylist.push_back(1);
mylist.push_front(0);
pop_bcak()
pop_front()
front() //返回链表第一个元素的引用
back()  //返回链表最后一个元素的引用
clear() //清空所有元素
empty() //
begin() //返回第一个元素的迭代器，可以++得到第二个元素的迭代器
end()
insert() 
erase()
...
```

## vector
* 动态数组容器，存相同类型数据.
* 位于标准库<vector>，处于万能头文件<bits/stdc++>当中。
* 可以自动调整大小，动态分配空间。
* 元素可以索引访问，0——size-1。可以用[]运算符或at()函数来访问元素。


```cpp
push_back()//添加末尾元素

pop_back()//删除末尾元素，必须保证vector非空

insert()//插入指定元素

erase()//删除指定元素

empty()//检测是否为空

resize()//设置vector的大小，此时push_back()会在最后一个位置后添加元素，不会添加到第一个位置。

begin()//指向第一个元素的迭代器

end()//指向最后一个元素之后位置的迭代器
//迭代器不能比较，只能等于不等于；可以++(重载),不可以+=1
//eg.for(auto it = vec.begin();it ！= vec.end();it++){}

sort(vec.begin(),vec.end())
```


# STL常用函数
## 二分查找
```cpp
binary_sort(begin,end,x);//在有序数组中查找x

lower_bound(begin,end,x);//在有序数组中查找第一个大于等于x的值，返回指向该元素的迭代器

upper_bound(begin,end,x);//在有序数组中查找第一个大于x的值，返回指向该元素的迭代器
lower_bound(begin,end,x) && =x//查找最后一个小于等于x的元素
upper_bound(begin,end,x) 前一个&&=x//查找最后一个等于x的元素
lower_bound(begin,end,x) 前一个//查找最后一个小于x的元素
upper_bound(begin,end,x)-upper_bound(begin,end,x)//单调序列中x的个数
//迭代器是地址，迭代器-a为下标
```
## 全排列
```cpp
vec.next_permutation()
```
生成当前序列的下一个排列，若存在下一个排列，将当前序列更改为下一个排列，返回true；
若已经是最后一个排列，将序列更改为第一个排列，返回false。


```cpp
vec.prev_permulation()
```
生成当前序列的上一个排列。
若存在上一个排列，将当前序列更改为尚一个排列，返回true；
若已经是第一个排列，将序列更改为最后一个排列，返回false。
## 排序
```cpp
sort()
```
位于algorithm
## 去重
```cpp
unique()
```
位于algorithm，去重之前必须先排序。
将重复元素移到末尾，并返回一个指向第一个重复元素的迭代器。
最后使用erase()将重复元素删除。

# C++特性
## 结构体
C++定义一个结构体不需要前边加struct
可以定义成员函数，重载运算符
```cpp
struct Point{
    int x,y;
    POint(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }
}
//创造新对象时初始化为(0,0)
```
## 函数重载
函数名可以相同，根据参数类型和参数个数来判断调用哪一个函数
```cpp
int add(int a,int b){
  return a+b;
}
double add(double a,double b){
  return a+b;
}
```
## 默认参数
```cpp
int add(int a,int b=0);
||
int add(int a,int b=0){
    ……
}
```
放在函数声明或者函数定义处，不可以两处都放。
默认参数必须放在最右边。
在函数调用时，若没有对应参数，则使用默认参数。只能按照顺序，不能省略。
## 匿名函数

```cpp

```

# 注意
*
  ```cpp
  s [i]
  ||
  s [i] != '\0'
  ```
## size()数据类型
* size()返回unsigned int类型，若数组为空，size()-1会得到很大的正数。
* 可以先强制转换int，或者i < size();

## 负数取余/取模计算
```c
123 % (-10) = -13
//按正数计算，结果加负号
```

# 位运算
## 按位与 &
同真才为真，两个数按位与运算，数不会变大
## 按位或 |
一真即为真，两个数按位或运算，数不会变小
## 异或 ^
同假才为假，数可以变大，变小或不变；
位宽不变；
满足性质：交换律，结合律，自反性x^x=0,x^0=x,逆运算：x^y=z则有z^y=x（两边^y可得）

## 按位取反 ～
常用于无符号整数，避免符号位造成干扰

## 按位移动
注意不要移动到符号位置上，左移动n位相当于乘以2的n次方，右移相反
按位右移会最高位自动补1,要用unsigned int

## 位运算技巧
1. x&1=1 ==> 奇数 ，否则位偶数
2. x>>i & 1 ==> 取二进制中的第i位
3. x|(1<<i)==> 修改某一位位1
4. lowbit(x)==x&-x 获取二进制中的最低位的1
   eg.x=(010010),lowbit(x)=(000010)常用于树状数组当中
5. x&(x-1) ==> 快速判断一个数字是否为2的次方 /如果x是2的次方，则x的二进制表示中只有一个1,x-1就有很多个连续的1而且和x的1没有焦急，x和x-1的与运算就一定为0
   
## 拆位算贡献
## 试除法
x位平方数，根x位整数，因子个数位奇数
因数个数位偶数个=>不是完全平方数

## 取模运算
设计负数和减法取模时，+p再取模
## 全局变量
在 C++ 中，全局区域只能进行声明或初始化，不能直接写执行语句。
## 字符串字面量的指针偏移
```cpp
cout<<a[i]<<" \n"[i == n];//i==n时返回1,取\n;否则返回0,取" ";
```        

