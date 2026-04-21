//
// Created by verge on 2026/4/19.
//
#include <ctime>
#include <iostream>
using namespace std;
class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(int _year=2008,int _month=1,int _day=1){
        year =_year;
        month=_month;
        day=_day;
    }
    void assign(int _year=2008,int _month=1,int _day=1){
        year =_year;
        month=_month;
        day=_day;
    }
    void display(){
        cout<<year<<'-'<<month<<'-'<<day<<'\n';
    }
    bool leap_year(){
        return ((year%4==0&&year%100!=0)||year%400==0);
    }

    void increment(int n){
        struct tm t={0};
        t.tm_year=year-1900;
        t.tm_mon=month-1;
        t.tm_mday=day+n;

        mktime(&t);

        year=t.tm_year+1900;
        month=t.tm_mon+1;
        day=t.tm_mday;
    }

};
int main(){
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
}