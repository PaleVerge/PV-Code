# 这是一个README文件

 

# 输入输出
* 取消同步流，使得cin，cout效率媲美printf，scanf
    ```cpp
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ```

* 输入输出流和格式化输入输出最好不混用

# 字符串

## 字符串输入
### getline(cin，strname)
* cin一行名为strname的字符串
## 成员函数
### str.substr(a,n)
* 提取a起始长度为n的子串，若无n自动提取整个，n不可越界
### string(n,a)
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
## 其他函数
### reverse(str)
* 字符串反转

# 其他
* s [i] 相当于 s [i] != '\0'
  
* c++万能头文件
    ```cpp
    #include <bits/stdc++.h> 
    ```