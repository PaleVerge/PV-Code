#include <iostream>

using namespace std;
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

class Date{
public:
    Date(int _year=2008,int _month=1,int _day=1);
    void assign(int _year,int _month,int _day);
    void display();
    bool leap_year();
    void increment();
    void increment(int n);
private:
    int year;
    int month;
    int day;
    int getday();
};
int Date::getday(){
    if (leap_year() && month==2){
        return 29;
    }
    return days[month];
}
Date::Date(int _year,int _month,int _day){
    year=_year;
    month=_month;
    day=_day;
}

void Date::assign(int _year,int _month,int _day){
    year=_year;
    month=_month;
    day=_day;
}
void Date::display(){
    cout<<year<<'-'<<month<<'-'<<day<<'\n';
}
bool Date::leap_year(){
    return ((year%4==0 && year%100!=0)||year%400==0);
}
void Date::increment(){
    day++;
    if (day>getday()){
        month++;
        day=1;
    }
    if (month>12){
        month=1;
        year++;
    }
}
void Date::increment(int n){
    for (int i=0;i<n;++i){
        increment();
    }
}
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

    return 0;
}