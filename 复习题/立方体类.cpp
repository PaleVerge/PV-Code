//
// Created by whip on 2026/6/26.
//
#include <iostream>

using namespace std;
class cube{
private:
    int l,w,h;
public:
    cube(int _l=1,int _w=1,int _h=1)
        :l(_l),w(_w),h(_h){}
    void input(){
        cin>>l>>w>>h;
    }
    void display(){
        cout<<l<<','<<w<<','<<h;
    }
    int volume(){
        return l*w*h;
    }
    int area(){
        return 2*(l*h+w*h+l*w);
    }
};
int main(){
    cube c1, c2, c3(2), c4(2,3), c5(2,3,4);
    c1.input();
    c1.display();
    cout<<","<<c1.volume()<<","<<c1.area()<<endl;
    c2.display();
    cout<<","<<c2.volume()<<","<<c2.area()<<endl;
    c3.display();
    cout<<","<<c3.volume()<<","<<c3.area()<<endl;
    c4.display();
    cout<<","<<c4.volume()<<","<<c4.area()<<endl;
    c5.display();
    cout<<","<<c5.volume()<<","<<c5.area()<<endl;

    return 0;
}