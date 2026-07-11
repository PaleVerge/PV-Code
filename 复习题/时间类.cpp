//
// Created by whip on 2026/7/11.
//
#include <iomanip>
#include <iostream>
using namespace std;

class time24{
private:
    int h,m,s;
public:
    time24(int _h,int _m,int _s){
        h=_h;
        m=_m;
        s=_s;
    }
    time24 operator-(int n){
        time24 tmp(h,m,s);

        for (int i=0;i<n;i++){
            tmp.s--;
            if (tmp.s<0){
                tmp.s=59;
                tmp.m--;
            }
            if (tmp.m<0){
                tmp.m=59;
                tmp.h--;
            }
            if (tmp.h<0){
                tmp.h=23;
            }
        }
        return tmp;
    }
    void display(){
        cout<<setw(2)<<setfill('0')<<h<<' '<<setw(2)<<m<<' '<<setw(2)<<s;
    }
};

int main()
{
    int h, m, s, n;
    cin >> h >> m >> s >> n;
    time24 t(h, m, s);
    time24 t2 = t - n;
    t2.display();
}