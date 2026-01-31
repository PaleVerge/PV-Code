# 这是一个README文件
### 包含了一些简单算法和注意事项，该项目由个人维护。
## 仓库仍然在建设当中……

<details>
  <summary><h1>🚀 图  例</summary>

  💡 新点子

  📅 日程表

  🛠️ 配置项

  ✅ 已完成 

  ❌ 未完成

  ⚠️ 待改动

</details>
 
<details>
  <summary><h1>📅TODO List</summary>

  ✅ 缓冲区问题

  ❌ 约瑟夫问题

  ❌ 字串KMP算法

  ❌ 查找算法

  ❌ 排序算法

  ❌ 树与图的基础实现

  ❌ 动态规划

  ❌ 高精度算法

</details>

<details>
<summary><h1>📌算法</summary>

## 排序
### 选择排序
* 输入:数组名称(也就是数组首地址)、数组中元素个数
```c
void select_sort(int *x, int n)
{
          int i, j, min, t;
      for (i=0; i<n-1; i++) /*要选择的次数:0~n-2共n-1次*/
      {
           min = i; /*假设当前下标为i的数最小,比较后再调整*/
           for (j=i+1; j<n; j++)/*循环找出最小的数的下标是哪个*/
           {
                if (*(x+j) < *(x+min))
                {   
                     min = j; /*如果后面的数比前面的小,则记下它的下标*/
                }
       }        
       if (min != i) /*如果min在循环中改变了,就需要交换数据*/
       {
            t = *(x+i);
            *(x+i) = *(x+min);
            *(x+min) = t;
       }
      }
}

```
### 插入排序
* 输入:数组名称(也就是数组首地址)、数组中元素个数
```c
void insert_sort(int *x, int n)
{
int i, j, t;
for (i=1; i<n; i++) /*要选择的次数:1~n-1共n-1次*/
{
   /*
    暂存下标为i的数。注意:下标从1开始,原因就是开始时
    第一个数即下标为0的数,前面没有任何数,单单一个,认为
    它是排好顺序的。
   */
   t=*(x+i);
     for (j=i-1; j>=0 && t<*(x+j); j--) /*注意:j=i-1,j--,这里就是下标为i的数,在它前面有序列中找插入位置。*/
       {
         *(x+j+1) = *(x+j); /*如果满足条件就往后挪。最坏的情况就是t比下标为0的数都小,它要放在最前面,j==-1,退出循环*/
       }
   *(x+j+1) = t; /*找到下标为i的数的放置位置*/
}
}

```

### 渗透建堆
* 输入:数组名称(也就是数组首地址)、参与建堆元素的个数、从第几个元素开始

```c
void sift(int *x, int n, int s)
{
int t, k, j;
t = *(x+s); /*暂存开始元素*/
k = s;   /*开始元素下标*/
j = 2*k + 1; /*右子树元素下标*/
while (j<n)
{
   if (j<n-1 && *(x+j) < *(x+j+1))/*判断是否满足堆的条件:满足就继续下一轮比较,否则调整。*/
   {
    j++;
   }
   if (t<*(x+j)) /*调整*/
   {
    *(x+k) = *(x+j);
    k = j; /*调整后,开始元素也随之调整*/
    j = 2*k + 1;
   }
   else /*没有需要调整了,已经是个堆了,退出循环。*/
   {
    break;
   }
} 
*(x+k) = t; /*开始元素放到它正确位置*/
}
/*

```
### 堆排序
* 输入:数组名称(也就是数组首地址)、数组中元素个数
```c
void heap_sort(int *x, int n)
{
int i, k, t;
//int *p;
for (i=n/2-1; i>=0; i--)
{
   sift(x,n,i); /*初始建堆*/
} 
for (k=n-1; k>=1; k--)
{
   t = *(x+0); /*堆顶放到最后*/
   *(x+0) = *(x+k);
   *(x+k) = t;
   sift(x,k,0); /*剩下的数再建堆*/ 
}
}

```
### 快速排序
* 输入:数组名称(也就是数组首地址)、数组中起止元素的下标
```c
void quick_sort(int *x, int low, int high)
{
int i, j, t;
if (low < high) /*要排序的元素起止下标,保证小的放在左边,大的放在右边。这里以下标为low的元素为基准点*/
{
   i = low;
   j = high;
   t = *(x+low); /*暂存基准点的数*/
   while (i<j) /*循环扫描*/
   {
      while (i<j && *(x+j)>t) /*在右边的只要比基准点大仍放在右边*/
        {
         j--; /*前移一个位置*/
        }
    if (i<j) 
      {
         *(x+i) = *(x+j); /*上面的循环退出:即出现比基准点小的数,替换基准点的数*/
         i++; /*后移一个位置,并以此为基准点*/
      }
    while (i<j && *(x+i)<=t) /*在左边的只要小于等于基准点仍放在左边*/
    {
     i++; /*后移一个位置*/
    }
    if (i<j)
    {
     *(x+j) = *(x+i); /*上面的循环退出:即出现比基准点大的数,放到右边*/
     j--; /*前移一个位置*/
    }
   }
   *(x+i) = t; /*一遍扫描完后,放到适当位置*/
   quick_sort(x,low,i-1);   /*对基准点左边的数再执行快速排序*/
   quick_sort(x,i+1,high);   /*对基准点右边的数再执行快速排序*/
}
}

```
### 希尔排序
* 输入:数组名称(也就是数组首地址)、数组中元素个数
```c
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
/*

```
### 冒泡排序
* 输入:数组名称(也就是数组首地址)、数组中元素个数
```c
void bubble_sort(int *x, int n)
{
int j, k, h, t;  
for (h=n-1; h>0; h=k) /*循环到没有比较范围*/
{
   for (j=0, k=0; j<h; j++) /*每次预置k=0,循环扫描后更新k*/
   {
     if (*(x+j) > *(x+j+1)) /*大的放在后面,小的放到前面*/
       {
         t = *(x+j);
         *(x+j) = *(x+j+1);
         *(x+j+1) = t; /*完成交换*/
         k = j; /*保存最后下沉的位置。这样k后面的都是排序排好了的。*/
       }
    }
}
}

```
* 注意比较和交换的都是a[j]
## 查找
### 二分查找
### 

## 高精度算法
![alt text](image.png)
* C/C++用字符数组/字符串模拟，大数组尽量不要动态分配，尽量定义为全局静态数组。
* 字符数组占用空间小，整型数组为cahr的4倍。字符数组读入数据方便，scanf或gets计科，整型数组要用%1d逐个读取，存入整型数组每个元素当中。
  ![alt text](image-2.png)

* 全局变量在编译的时候会自动初始化为0，局部变量不可以省略初始化。因此全局静态数组不需要初始化为0。
* 大数组（大于1w）不能定义在函数内部，可能会栈溢出。局部变量栈空间小。
* 1MB--25w的数组
* Py/Java可直接计算
* 蓝桥杯为单组数据。
* 1. 数据对齐：正数个位对其，实数小数点对齐。字符串反转
* 2. 字符串转换
 ![alt text](image-3.png)
* 3. 非有效数据置零（读入前进行）
```c
a[i]=0; 
a[i]='\0';
memset(s,0,sizeof(a));
```
  ## 加法

   ![alt text](image-4.png)
   ![alt text](image-5.png)
   输出（注意i>0，使得0能正常输出）
   ![alt text](image-6.png)

   ### c++实现1
   ![alt text](image-8.png)
   ### c++实现2
   ![alt text](image-9.png)
   ### c实现
   ![alt text](image-7.png)

   ## 减法
   ![alt text](image-10.png)

   ## 乘法
   ![alt text](image-11.png)
   ![alt text](image-12.png)
   ![alt text](image-13.png)

   ## 除法
   * 高精度/单精度
   * 单精度/高精度
   * 计算方法：以字符串接受高精度，转换为数字后储存在字符数组中，从高位到低位处理，模拟除法计算。
   ![alt text](image-16.png)
## 约瑟夫问题

## 子串问题KMP算法


</details>






<details>
<summary><h1>⚠️注意事项</summary>

## 1. 对于for循环中的i，要防止大于字符串长度，如：
``c
for (int i = 0; i < k && i < len; i++) {
   ;
}
``
# 2. 缓冲区问题
* scanf()后换行符 (\n) 依然留在输入缓冲区里，会影响后续字符读取，必须清空缓冲区
  ```c
  while(getchar()!='\n');
  //
  getchar();
  ```
# 3. 凯撒密码（循环问题）：
* a[i] = (a[i] - 'A' + 2) % 26 + 'A';

# 4. 求数字的首位
* 字符串指针法：
  ```c
  char * p=str// 定义指针指向数组首地址,*p 即为第一个字符（最高位数字）
  ```
* 数值计算法：
  ```c
    while (n >= 10) { n /= 10; }
  ```
# 5. 哈希数组（通常是一个大小为 256 的 int 或 bool 数组）
  ``` c
  int flag[256]={0};
  for(int i=0;a[i]!='\0';i++){
          if(flag[(int)a[i]]==0){
              printf("%c",a[i]);
              flag[(int)a[i]]=1;
          }
    }
  ```
# 6. 去除fgets读取字符串末尾的换行符方法
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
  int size4 = sizeof int;    // 错误！编译器会报错
  ```
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
## 8. 回文串问题
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
## 9. 数字镜像变换
* 0-9，2-8，2-7……
  ```c
  if (isdigit(a)) {
      putchar('9' - (a - '0'));// 如 a='1', 则 '9' - (49-48) = '9' - 1 = '8'
  } else {
      putchar(a);// 原样输出非数字字符（包括空格和换行符）
  }
  ```
##  10. while(scanf("%c",&a)!=EOF)
* 会读取回车，回车字符影响下面的判断
* while(scanf(" %c", &a) != EOF)会自动跳过所有空白字符
## 11. 局部排序
* 内层循环变，外层循环不变
## 12. 动态内存分配
* int *a = (int *)malloc(n * sizeof(int));
* 别忘了free(a);
## 13. 元素移动问题
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


## 负数取余计算
* 123%(-10)=-13
* 按正数计算，结果加负号
  
# ASCII码
数字0--48
数字1--49
数字2--50
a--
z--
A--
Z--
</details>