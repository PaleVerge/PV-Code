//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
int dayinmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
private:
    int day,year,month;
public:
    Date(int day=1,int month=1,int year=2008):day(day),month(month),year(year){}

    void assign(int _day,int _month,int _year){
        year=_year;
        if (Leap_year(year)){
            dayinmonth[2]=29;
        }
        if (_month>12){
            int tmp=_month%12;
            if (tmp==0){
                month=12;
            }else{
                month=tmp;
            }
        }else{
            month=_month;
        }
        if (_day>dayinmonth[month]){
            int tmp=_day%dayinmonth[month];
            if (tmp==0){
                day=dayinmonth[month];
            }else{
                day=tmp;
            }
        }else{
            day=_day;
        }

    }

    bool Leap_year(int year){
            if (year%4==0&&year%100!=0 || year%400==0){
                return true;
            }
        return false;
    }
    void display(){
        cout<<day<<'/'<<month<<'/'<<year<<endl;
    }
    void increment(int n){
        for (int i=0;i<n;i++){
            day++;
            if (day>dayinmonth[month]){
                day=1;
                month+=1;
            }
            if (month>12){
                month=1;
                year++;
            }
        }
    }

};
int main(){
    Date date1, date2(1,5,2016),date3;

    int n,day,month,year;
    cin>>day>>month>>year;

    date3.assign(day,month,year);

    cin>>n;
    date1.display();
    date2.display();
    date3.display();

    date3.increment(n);
    date3.display();
    return 0;
}