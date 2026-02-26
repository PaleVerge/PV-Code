# 这是一个README文件

# 输入输出
* 取消同步流，使得cin，cout效率媲美printf，scanf
    ```cpp
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ```
## endl
相比"\n"，可以刷新输出缓冲区
## cout 控制符
* 位于<iomanip>中
```cpp
* dec //设置基数为10，后面10进制输出
* hex //设置基数为16，后面16进制输出
* oct //设置基数为8，后面8进制输出
* setw(n) //设置域宽为n，设置一次使用一次
* setfill(c) //设置填充字符为c
* setiosflags(ios::left/right/skipws/uppercase/lowercase)//左对齐，右对齐，忽略前导空白，16进制大写输出，16进制小写输出
* setprecision(n) //设置浮点精度为n
* setiosflags(ios::fixed)//固定的浮点显示
* setiosflags(ios::scientific)//指数显示
```

* 输入输出流和格式化输入输出最好不混用

# 字符串

## 字符串输入
cin()遇到第一个空格就停止
cin.ignore(); // 跳过缓冲区里的换行符
### getline(cin，strname)
* cin一整行名为strname的字符串，直到遇到换行符
## 成员函数
### str.substr(a,n)
* 提取a起始长度为n的子串，若无n自动提取整个，n不可越界
### string(n,‘a’)
* 初始化一个有n个a字符的字符串 
### str.c_str()
* 将cpp的字符串转为c风格的字符数组
* printf输出时需要进行转换
### str.length() / str.size()
* 获取长度
* 类型为unsigned，使用前最好(int)转换
### str.find()
* 查找字串位置，返回字串起始位置，没找到返回-1
### str.append("xxx") / str + "xxx"
* 追加
### str.repalce(a,n,"xxx")
* a字串位置，n字串长度，替换
### str1.compare(str2) // < > =
* 字符串比较
* 字典序比较，不看长度，从小到大逐个比较
## 字符串遍历
* 循环枚举下标
* auto
  ```cpp
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
  ```
## 查找单词

### 防止词中词

```cpp
word =' '+word+' '
s =' '+s+' '
```
## 大小写转换
```cpp
transform(word.begin(), word.end(), word.begin(), ::tolower);
transform(s.begin(), s.end(), s.begin(), ::tolower);
```
## 其他函数
### reverse(str)
* 字符串反转


# 其他
* s [i] 相当于 s [i] != '\0'
  
* c++万能头文件
    ```cpp
        #include <bits/stdc++.h> 
    ```

# STL

## map
关联容器，存放键值对，数据结构为红黑树
Key 键
T 值

* insert 插入
* erase 删除
* find 查找
* count 统计元素个数
* size 返回元素个数
* begin 返回指定容器起始位置的迭代器
* end 返回指定容器末尾位置的迭代器
* clear 清空容器
* empty 判断容器是否为空

make_pair(4,"abc")==={4,"abc"}
## mutimap
关联容器，可存放多个有相同键的键值对，数据结构为红黑树

## unordered_map
关联容器，储存键值对，不会根据键的顺序排序，而是哈希映射到储存桶
* 极好的平均时间复杂度，极坏的最差时间复杂度

# 全排列
## next_permutation
生成当前序列的下一个排列，若存在下一个排列，将当前序列更改为下一个排列，返回true；
若已经是最后一个排列，将序列更改为第一个排列，返回false。
## prev_permulation
生成当前序列的上一个排列。
若存在上一个排列，将当前序列更改为尚一个排列，返回true；
若已经是第一个排列，将序列更改为最后一个排列，返回false。

# vector
动态数组容器，存相同类型数据，位于标准库<vector>，处于万能头文件<bits/stdc++>当中。
可以自动调整大小，动态分配空间。
元素可以索引访问，0——size-1。可以用[]运算符或at()函数来访问元素。
size()返回unsigned int类型，若数组为空，size()-1会得到很大的正数。可以先强制转换int，或者i < size();

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

# 排序
## sort()
位于<algorithm>
# 去重
## unique()
位于<algorithm>，去重之前必须先排序。
将重复元素移到末尾，并返回一个指向第一个重复元素的迭代器。
最后使用erase()将重复元素删除。

# 结构体
定义一个结构体不需要前边加struct
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
# 函数重载
函数名可以相同，根据参数类型和参数个数来判断调用哪一个函数

# 默认参数
放在函数声明或者函数定义处，不可以两处都放。
默认参数必须放在最右边。
在函数调用时，若没有对应参数，则使用默认参数。只能按照顺序，不能省略。
# 匿名函数lumbda函数

