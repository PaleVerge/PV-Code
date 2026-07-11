//
// Created by whip on 2026/7/11.
//
#include <iostream>
using namespace std;
class point{
private:
    int x,y;
public:
    point(int _x=0,int _y=0){
        x=_x;
        y=_y;
    }
    void input(){
        cin>>x>>y;
    }
    void output(){
        cout<<'('<<x<<','<<y<<')'<<endl;
    }
    point operator+(point t){
        point tmp;
        tmp.x=x;
        tmp.y=y;

        tmp.x+=t.x;
        tmp.y+=t.y;

        return tmp;
    }
    point operator-(point t){
        point tmp;
        tmp.x=x;
        tmp.y=y;

        tmp.x-=t.x;
        tmp.y-=t.y;

        return tmp;
    }
};
int main(){
    point p1,p2;
    p1.input();
    p2.input();

    (p1+p2).output();
    (p1-p2).output();
    return 0;
}