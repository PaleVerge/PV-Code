//
// Created by verge on 2026/4/19.
//
#include <ctime>
#include <iostream>
using namespace std;
int days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(int _day=1,int _month=1,int _year=2008){
        year =_year;
        month=_month;
        day=_day;
    }
    void assign(int _day,int _month,int _year){
        year =_year;
        month=(_month%12==0)?12:_month%12;
        day=(_day%31==0)?days[month]:_day%31;
    }
    void display(){
        cout<<day<<'/'<<month<<'/'<<year<<'\n';
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
    Date date1,date2(1,5,2016),date3;
    int n,day,month,year;
    cin>>day>>month>>year;
    date3.assign(day,month,year);
    
    date1.display();
    date2.display();
    date3.display();
    cin>>n;
    
    date3.increment(n);
    date3.display();
    return 0;
}

