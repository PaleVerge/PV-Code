#include <iostream>
#include <ctime>   // 必须包含此头文件

using namespace std;

class Date {
public:
    Date(int _year = 2008, int _month = 1, int _day = 1)
        : year(_year), month(_month), day(_day) {}

    void assign(int _year, int _month, int _day) {
        year = _year; month = _month; day = _day;
    }

    void display() {
        cout << year << "-" << month << "-" << day << endl;
    }

    // 核心：使用 ctime 库进行时间运算
    void increment(int n = 1) {
        // 1. 构造 tm 结构体
        struct tm t = {0};
        t.tm_year = year - 1900; // tm_year 是从 1900 年开始计算的
        t.tm_mon = month - 1;    // tm_mon 范围是 0-11
        t.tm_mday = day + n;     // 直接加 n 天，mktime 会自动处理溢出

        // 2. 调用 mktime 自动标准化日期
        // mktime 会修改传入的结构体 t，将其调整为合法日期
        mktime(&t);

        // 3. 将调整后的结果回填给类成员
        year = t.tm_year + 1900;
        month = t.tm_mon + 1;
        day = t.tm_mday;
    }

    // 题目要求的 increment() 重载
    void increment() {
        increment(1);
    }

    bool leap_year() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

private:
    int year, month, day;
};

int main() {
    Date date1,date2(2016,5,1),date3;
    int n,day,month,year;

    date1.display();
    date2.display();
    cin>>year>>month>>day;
    date3.assign(year,month,day);
    date3.display();
    cin>>n;
    date3.increment(n);
    date3.display();
    return 0;
}