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
    time24 operator+(int sec)const{
        time24 tmp;
        tmp.second=second+sec;
        tmp.minute=minute+tmp.second/60;
        tmp.second%=60;
        tmp.hour=hour+tmp.minute/60;
        tmp.minute%=60;
        tmp.hour%=24;
        return tmp;
    }
    time24 operator+(const time24 &t)const{
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
};
time24 operator+(int secs,const time24 &t){
    return t+secs;
}
int main(){
    time24 t1,t2,t3,t4;
    t1.input();
    t2=t1+4;
    t3=t1+t2;
    t4=5+t1;
    t2.display();
    t3.display();
    t4.display();
    t2=t1-4;
    t3=t1-t2;
    t2.display();
    t3.display();

}