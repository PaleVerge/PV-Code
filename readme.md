# 这是一个README文件
### 仓库仍然在建设当中……
##
##


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

  #### ⚠️ 选择排序

  #### ⚠️ 桶排序

  #### ⚠️ 堆排序

  #### ⚠️ 快速排序

  #### ⚠️ 冒泡排序

  #### ⚠️ 子串KMP算法

  #### ⚠️ 二分查找

  #### ⚠️ DFS

  #### ⚠️ 红黑树

  #### ⚠️ 动态规划

##
##

# C部分
## 排序
### 选择排序
```c
//输入:数组名称、数组中元素个数
void select_sort(int *x, int n){
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
void insert_sort(int *x, int n){
  int i, j, t;
  for (i=1; i<n; i++){ /*要选择的次数:1~n-1共n-1次*/
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
### 快速排序
```c
//输入:数组名称、数组中起止元素的下标
void quick_sort(int *x, int low, int high)
{
int i, j, t;
if (low < high) /*要排序的元素起止下标,保证小的放在左边,大的放在右边。这里以下标为low的元素为基准点*/
{
   i = low;
   j = high;
   t = *(x+low); /*暂存基准点的数*/
   while (i<j) { /*循环扫描*/
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
//输入:数组名称、数组中元素个数
void bubble_sort(int *x, int n){
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
```c
//
```

### 高精度算法


  * C/C++用字符数组/字符串模拟，大数组尽量不要动态分配，尽量定义为全局静态数组。
  * 字符数组占用空间小，整型数组为cahr的4倍。字符数组读入数据方便，scanf或gets计科，整型数组要用%1d逐个读取，存入整型数组每个元素当中。


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

  <details>

  <summary><b><font size="3">缓冲区问题</font></summary>

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
    setfill(c) //设置填充字符为c
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


# 常用函数
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

