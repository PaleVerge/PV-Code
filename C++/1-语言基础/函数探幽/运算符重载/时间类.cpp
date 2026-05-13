//
// Created by ritno on 2026/5/11.
//
//
// Created by ritno on 2026/5/11.
//
#include <iostream>
#include <iomanip>
using namespace std;
class time24{
private:
    int hour,minute,second;
public:
    time24(int h=0,int m=0,int s=0){
        hour=h;
        minute=m;
        second=s;
    }
    void input(){
        cin>>hour>>minute>>second;
    }
    void display(){
        cout<<setfill('0')<<setw(2)<<hour<<':'<<setw(2)<<minute<<':'<<setw(2)<<second<<endl;
    }
    time24 operator+(int sec)const{ //time24+秒
        time24 tmp;
        tmp.second=second+sec;
        tmp.minute=minute+tmp.second/60;
        tmp.second%=60;
        tmp.hour=hour+tmp.minute/60;
        tmp.minute%=60;
        tmp.hour%=24;
        return tmp;
    }
    time24 operator+(const time24 &t)const{ //time24+time24
        int sec=t.hour*3600+t.minute*60+t.second;
        time24 tmp;
        tmp.second=second+sec;
        tmp.minute=minute+tmp.second/60;
        tmp.second%=60;
        tmp.hour=hour+tmp.minute/60;
        tmp.minute%=60;
        tmp.hour%=24;
        return tmp;
    }
    time24 operator-(const time24 &t)const{
        int sec=t.hour*3600+t.minute*60+t.second;
        time24 tmp;
        tmp.second=second-sec;
        tmp.minute=minute;
        tmp.hour=hour;
        while(tmp.second<0){
            tmp.second+=60;
            tmp.minute--;
        }
        while(tmp.minute<0){
            tmp.minute+=60;
            tmp.hour--;
        }
        while(tmp.hour<0){
            tmp.hour+=24;
        }
        return tmp;
    }
    time24 operator-(int sec)const{
        time24 tmp;
        tmp.second=second-sec;
        tmp.minute=minute;
        tmp.hour=hour;
        while(tmp.second<0){
            tmp.second+=60;
            tmp.minute--;
        }
        while(tmp.minute<0){
            tmp.minute+=60;
            tmp.hour--;
        }
        while(tmp.hour<0){
            tmp.hour+=24;
        }
        return tmp;
    }
    bool operator==(time24 t){
        if (second==t.second&&hour==t.hour&&minute==t.minute){
            return true;
        }
        return false;
    }
    time24 operator++(){
        (*this)=(*this)+1;
        return *this;
    }
    time24 operator++(int t){
        time24 tmp=(*this);
        (*this)=(*this)+1;
        return tmp;
    }
    friend ostream& operator<<(ostream& os,const time24& t){
        os<<setfill('0')<<setw(2)<<t.hour<<':'<<setw(2)<<t.minute<<':'<<setw(2)<<t.second<<endl;
        return os;
    }
    friend istream& operator>>(istream& is,time24& t){
        is>>t.hour>>t.minute>>t.second;
        return is;
    }

};
time24 operator+(int secs,const time24 &t){
    return t+secs;
}
int main(){
    time24 t1, t2, t3, t4;
    cin >> t1;
    t2 = t1 + 4;
    t3 = t1++;
    t4 = ++t1;
    if (t3 == t4)
        cout << "t3 == t4" << endl;
    else
        cout << "t3 != t4" << endl;
    cout << t2 << t3 << t4;
}